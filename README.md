# Quick start
For Windows:
1. Prepare enviroment and build
   1. Using *cmake*

        ```
        mkdir build
        cd build
        cmake ..
        cmake --build .
        ```

    2. Using [nob.h](https://github.com/tsoding/nob.h)

        Bootstrap nob:
        ```
        gcc -o nob.exe nob.c
        ```
        Run nob.exe to build project
        ```
        nob.exe
        ```

2. Run
    ```
        clox.exe file.lox
    ```
      to interpret a Lox script 
      or
    ```
        clox.exe
    ```
      to enter REPL;
    
      or run with cmake:
    ```
        cmake --build . --target run
    ```
    
3. Use of test suite
    ``` 
        cd ./testSuite
        ./generate.py
        pytest
    ```