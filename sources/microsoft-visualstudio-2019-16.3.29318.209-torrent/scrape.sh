#! /usr/bin/env bash

# note: this was the first scrape, so no need to append to existing source.txt files

mkdir unpack
cd unpack

# TODO download torrent: 'Microsoft Visual Studio Enterprise 2019 v16.3.0 (16.3.29318.209) + Serial - [haxNode].torrent'

# some idiot packed a 30GB iso into a 30GB zip archive... fuuu!!
# i tried to mount the zip with "archivemount" but that fails/hangs (out of memory?)
unzip "$HOME/Downloads/Microsoft Visual Studio Enterprise 2019 16.3.0 + Serial/Microsoft Visual Studio Enterprise 2019 16.3.0 + Serial.zip"

sudo mount -o loop ISO/mui_visual_studio_ent_2019_x86_x64_dvd_16.3.29318.209.iso mnt-iso/

cd mnt-iso
find . -type f | while read f; do echo f=$f; nmake_path=$(7z l $f 2>/dev/null | grep '/nmake.exe$' | awk '{ print $6 }'); if [ -z "$nmake_path" ]; then continue; fi; echo "nmake_path=$nmake_path"; mkdir ../unpack-file; cd ../unpack-file; 7z -y x ../mnt-iso/$f $nmake_path; find . -iname nmake.exe | while read f2; do h=$(sha256sum $f2 | cut -d' ' -f1); echo h=$h f2=$f2; if ! [ -e ../nmake-sha256-$h ]; then mkdir ../nmake-sha256-$h; cp $f2 ../nmake-sha256-$h; fi; echo $f | sed 's|^\./||' >>../nmake-sha256-$h/source.txt; done; cd ../mnt-iso; rm -rf ../unpack-file; done
cd ..

# no. this works only for some nmake.exe files
#ls -d nmake-sha256-* | grep -v -- -version- | while read d; do v=$(wine $d/nmake.exe 2>&1 | grep -F "Microsoft (R) Program Maintenance Utility Version"); echo $d $v; if [ -n "$v" ]; then mv -v $d $d-version-$(echo $v | sed 's/^.* Version //' | tr -d $'\r'); fi; done

ls -d nmake-sha256-* |
while read d
do
  # try to get the exact version with 4 parts. this sometimes works
  v=$(wine $d/nmake.exe 2>&1 | grep -F "Microsoft (R) Program Maintenance Utility Version" | sed 's/^.* Version //' | tr -d $'\r')
  if [ -z "$v" ]; then
    # fallback to the loose version with 3 parts. this always works
    v=$(cat $d/source.txt | head -n1 | sed -E 's|^.*,version=([0-9.]+)[/,].*$|\1|')
  fi
  echo $d $v
  if [ -n "$v" ]
  then
    mv -v $d $(echo $d | sed 's/-version-.*$//')-version-$v
  else
    echo "no version found: $d"
  fi
done

# list by version and hash
# -> some versions have multiple hashes
ls -d nmake-sha256-* | while read d; do h=$(echo $d | cut -d- -f3); v=$(echo $d | cut -d- -f5); printf "%-20s %s\n" $v $h; done | sort -V

sudo umount mnt-iso/

mv nmake-sha256-* ..

cd ..

rm -rf unpack

sed -i 's|^|microsoft-visualstudio-2019-16.3.29318.209-torrent |' */source.txt

mv nmake-sha256-* ..

mkdir sha256
ls -d nmake-sha256-* | while read d; do
  h=$(echo $d | cut -d- -f3)
  v=$(echo $d | cut -d- -f5-)
  mv $d sha256/$h-nmake-$v
done
