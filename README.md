# Simple example c++ console project
it includes a qmake project file
but can be compiled with any IDE.
## how to build from terminal
### on gnu/linux , macOS, win mingw (msys/cygwin)
### without using qmake and qt libraries
make -f Makefile.lnx
#
### on gnu/linux , macOS, win mingw (msys/cygwin)
### using qmake and qt libraries
qmake
make
### how to run on unix like
./QtClasses "my text" 21
## how to remove build files on GNU/Linux
make -f Makefile clean
## how to remove all generated files on GNU/Linux
make -f Makefile distclean
#
## how to build on MS win 32 bit from terminal
### without using qmake and qt libraries
mingw32-make -f Makefile.win
# or for 64 bit install
mingw32-make -f Makefile.win64
### ho to build on MS win (msys/cygwin)  using mingw 
### using qmake and qt libraries
### (optional) generate the Makefile for MS win
qmake QtClasses-win.pro
mingw32-make -f Makefile-win.Debug
### how to run on MS win cmd
debug/QtClasses-win "example text string" 10
## how to remove build files on win
mingw32-make -f Makefile-win.Debug clean
## how to remove all generated files
mingw32-make -f Makefile-win.Debug distclean
#
### to compile on MS win using MSVC 2008 compiler Visual Studio 9.0
qmake -spec win32-msvc2008 qtc-msvc2008.pro -o Makefile
#
nmake /f Makefile
### to run on ms win terminal
qtc-msvc2008 "ciccio" 21

