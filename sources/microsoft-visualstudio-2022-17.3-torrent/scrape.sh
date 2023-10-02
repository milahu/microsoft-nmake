#! /usr/bin/env bash

set -e

mkdir -p unpack
cd unpack

# TODO download torrent: 'Microsoft Visual Studio 2022 Enterprise v17.3 en-us.iso.torrent'

mkdir mnt-iso
sudo mount -o loop "../Microsoft Visual Studio 2022 Enterprise v17.3 en-us.iso" mnt-iso/

cd mnt-iso
find . -type f | while read f; do echo f=$f; nmake_path=$(7z l $f 2>/dev/null | grep '/nmake.exe$' | awk '{ print $6 }'); if [ -z "$nmake_path" ]; then continue; fi; echo "nmake_path=$nmake_path"; mkdir ../unpack-file; cd ../unpack-file; 7z -y x ../mnt-iso/$f $nmake_path; find . -iname nmake.exe | while read f2; do h=$(sha256sum $f2 | cut -d' ' -f1); echo h=$h f2=$f2; if ! [ -e ../nmake-sha256-$h ]; then mkdir ../nmake-sha256-$h; cp $f2 ../nmake-sha256-$h; fi; echo $f | sed 's|^\./||' >>../nmake-sha256-$h/source.txt; done; cd ../mnt-iso; rm -rf ../unpack-file; done
cd ..

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

mv nmake-sha256-* ..

cd ..

sed -i 's|^|microsoft-visualstudio-2022-17.3-torrent |' */source.txt

mkdir -p ../../sha256
ls -d nmake-sha256-* | while read d; do
  h=$(echo $d | cut -d- -f3)
  v=$(echo $d | cut -d- -f5-)
  if ! [ -e ../../sha256/$h-nmake-$v ]; then
    mv -v $d ../../sha256/$h-nmake-$v
  else
    echo found duplicate $d vs ../../sha256/$h-nmake-$v - merging source.txt
    cat $d/source.txt >>../../sha256/$h-nmake-$v/source.txt
    rm -rf $d
  fi
done

set -x
sudo umount unpack/mnt-iso/
rm -rf unpack
