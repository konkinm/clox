# Quick start
For Windows:
1. Prepare enviroment and build
``` console
    mkdir build
    cd build
    cmake ..
    cmake --build .
```
	
2. Run
``` console
    clox.exe file.lox
```
  to interpret a Lox script 
  or
```
    clox.exe
```
  to enter REPL;
	
  or run with cmake:
``` console
    cmake --build . --target run
```