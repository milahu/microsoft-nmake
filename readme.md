# microsoft nmake

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


## nmake sources

- [microsoft-visualstudio-2019-16.3.29318.209-torrent](sources/microsoft-visualstudio-2019-16.3.29318.209-torrent)
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
