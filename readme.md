# microsoft nmake

multiple versions of the nmake.exe binary,
which is part of Microsoft VisualStudio BuildTools,
including some decompiled nmake.cpp sources

<blockquote>

The Microsoft Program Maintenance Utility (NMAKE.EXE) is a command-line tool included with Visual Studio.
It builds projects based on commands that are contained in a description file, usually called a makefile.

&mdash; [NMAKE Reference](https://learn.microsoft.com/en-us/cpp/build/reference/nmake-reference)

</blockquote>

## nmake versions

<!--
ls -d sha256/*-nmake-* | while read d; do
  h=$(echo $d | cut -d- -f1)
  v=$(echo $d | cut -d- -f3-)
  echo $v $d
done | sort -V -r | while read v d; do echo "- [nmake $v]($d)"; done 
-->

- [nmake 15-nodos](sha256/0b51a812614c2cd383cd416e098aa0d27f0cb544b8e3df6889ce8e9769e401b2-nmake-15-nodos)
- [nmake 15](sha256/21ac98110e19b2f0d59efaa1cb4807700bed1f6ebb4b74b56783c3b7300edb7c-nmake-15)
- [nmake 14.33.31629.0](sha256/3a1ebd8d25e87796d1a95cd4622b32f1df9d49e1b38ff58b91b6b86a53f0525e-nmake-14.33.31629.0)
- [nmake 14.23.28105.4](sha256/23563b29f3b0e8b7a925a655b810f81e0e67d65a2bff197b1ad6c8021b0b8eea-nmake-14.23.28105.4)
- [nmake 14.22.27905.0](sha256/afe7d921f7abec014217646bf2031b6b1b1cdc58ae6cb56e46eb6cc663443a1f-nmake-14.22.27905.0)
- [nmake 14.21.27702.2](sha256/c43ac12a2500c9491c6d74b9a892d6e4802a9d191a45903cfb57e240203f0e95-nmake-14.21.27702.2)
- [nmake 14.20.27508.1](sha256/ea72cefc022d1211ab44ff459e42329e477d7aac5995a1e1266120ab56b92f97-nmake-14.20.27508.1)
- [nmake 14.20.27508.1](sha256/1f6257610c17232f4215362d1502eb8bce75e1c3a37b1d6a0313983094a71925-nmake-14.20.27508.1)
- [nmake 14.20.27508.1](sha256/ea72cefc022d1211ab44ff459e42329e477d7aac5995a1e1266120ab56b92f97-nmake-14.20.27508.1)
- [nmake 14.16.27031.1](sha256/e7c8d23b9d391301246bd26ed5da92366ea985a0eed2f1987f908cd92f4f131a-nmake-14.16.27031.1)
- [nmake 14.16.27027.1](sha256/73953d22eed9dce5eee02ceccf36c9c804ccfed8e20f926a1a6515a95564a103-nmake-14.16.27027.1)
- [nmake 10.0.10240.3](sha256/cf523313efe8a4d99b0bb6551231d87465ddc404558a5ff34bf123c76309d7ce-nmake-10.0.10240.3)

## nmake sources

- [microsoft-visualstudio-2022-17.3-torrent](sources/microsoft-visualstudio-2022-17.3-torrent)
- [microsoft-visualstudio-2019-16.3.29318.209-torrent](sources/microsoft-visualstudio-2019-16.3.29318.209-torrent)
- [microsoft-visualstudio-2019-16.0.28729.10-torrent](sources/microsoft-visualstudio-2019-16.0.28729.10-torrent)
- http://web.archive.org/web/20120402130733/http://download.microsoft.com/download/vc15/patch/1.52/w95/en-us/nmake15.exe

## related

- https://stackoverflow.com/questions/12396543/where-can-i-get-a-standalone-nmake-exe
- https://stackoverflow.com/questions/69274364/how-do-i-obtain-microsofts-c-compiler-and-standard-library-and-just-that
   - Visual Studio Build Tools (vs_buildtools.exe)
- https://stackoverflow.com/questions/40504552/how-to-install-visual-c-build-tools
   - https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2019
- https://learn.microsoft.com/en-us/cpp/build/building-on-the-command-line
   - If you only want the command-line toolset, download the Build Tools for Visual Studio.
   - https://visualstudio.microsoft.com/downloads/#build-tools-for-visual-studio-2022
   - vs_BuildTools.exe
- https://stackoverflow.com/questions/17343071/how-do-i-use-nmake-on-the-command-line
   - https://developer.microsoft.com/en-us/windows/downloads/windows-sdk/
- https://svn.osgeo.org/gdal/branches/2.2/gdal/nmake.opt
   - nmake example arguments, nmake example options

### convert nmake makefile to gnu makefile

- https://lists.gnu.org/archive/html/help-make/2010-08/msg00100.html
- https://stackoverflow.com/questions/881921/converting-nmake-to-make
- https://learn.microsoft.com/en-us/cpp/build/reference/makefile-preprocessing

### parse nmake makefiles

- https://github.com/KongfuMan/NMakeParser
- https://github.com/Footsiefat/NMake2MSBuild
