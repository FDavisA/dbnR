## Update
Update from version 0.7.1 to 0.7.5. In this update, I added more flexibility for structure learning with the dmmhc algorithm, added new network visualization options, improved security checks to be more informative when exceptions are thrown, deprecated the 'size' parameter for inference and added the names and doi of the algorithms included in the package. This version maintains backwards compatibility with older versions.

## Test environments
* Windows 10 (x64), R 4.1.3 (local)
* Ubuntu 18.04 (x64), R 4.1.2 (local)
* Rhub
* win-builder (devel, release and oldrelease)

## R CMD check results
0 ERRORs | 0 WARNINGs | 3 NOTEs

(On win-builder)
Possibly mis-spelled words in DESCRIPTION:
  Bielza (13:49)
  Larrañaga (13:63)
  Maciel (12:76)
  Quesada (13:37)
  Trabelsi (12:5)
  
* Those are the names of the authors of some of the papers I cite in the description, they are not mis-spelled words.

(On my local Ubuntu machine)
checking installed package size ... NOTE
  installed size is  5.3Mb
  sub-directories of 1Mb or more:
    libs   4.5Mb
    
* My package uses C++ code with Rcpp, and in linux systems this seems to cause the 'libs' folder to get bloated.

(On my local Windows 10 machine)
  Note: information on .o files for i386 is not available
  Warning in read_symbols_from_dll(so, rarch) :
    this requires 'objdump.exe' to be on the PATH
  Warning in read_symbols_from_dll(so, rarch) :
    this requires 'objdump.exe' to be on the PATH
  Warning in read_symbols_from_dll(so, rarch) :
    this requires 'objdump.exe' to be on the PATH
  Note: information on .o files for x64 is not available
  Warning in read_symbols_from_dll(so, rarch) :
    this requires 'objdump.exe' to be on the PATH
  Warning in read_symbols_from_dll(so, rarch) :
    this requires 'objdump.exe' to be on the PATH
  Warning in read_symbols_from_dll(so, rarch) :
    this requires 'objdump.exe' to be on the PATH
  File 'dbnR/libs/i386/dbnR.dll':
    Found no calls to: 'R_registerRoutines', 'R_useDynamicSymbols'
  File 'dbnR/libs/x64/dbnR.dll':
    Found no calls to: 'R_registerRoutines', 'R_useDynamicSymbols'
  
  It is good practice to register native routines and to disable symbol
  search.
  
  See 'Writing portable packages' in the 'Writing R Extensions' manual.

* I only get this note on my local win10 machine with R versions >4.1.1. I have not changed anything related to the C++ code and I did not get this note before. After looking for solutions to this, it seems like it has to do with some kind of interaction between devtools and Rstudio on Windows machines.

## Downstream dependencies
There are no downstream dependencies
