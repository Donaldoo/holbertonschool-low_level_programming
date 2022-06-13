First day of C, Hello World
=
C is a **general-purpose language** that was developed by *Dennis Ritchie* for the Unix operating system in 1972.

## Basic library functions used in this project:
* `printf()` is a funcion and is used to send output to the screen. The function prints the string inside quotations.
* `putchar(int char)` is used to print a single character, of unsigned char type, to stdout.
* `puts` writes a string to stdout up to but not including the null character. A newline character is appended to the output.
* `gcc` is used to compile mainly C and C++ language. The most important option required is the name of the source program.

gcc options | Descriptions
----------- | ------
-c | Compile or assemble the source files, but do not link
-S |  Stop after the stage of compilation proper
-E | Stop after the preprocessing stage
-o | Give a name to the compiled file instead of default name `a.out`.
-Werrior | Show the warning if any error is there in the program.
-Wall | Checks not only for errors but also for all kinds warning like unused variables errors

## Files
Files are scripts or programs written in C.

<!-- ⛔️ MD-MAGIC-EXAMPLE:START (TOC:collapse=true&collapseText=Click to expand) -->
<details>
<summary>Click to expand</summary>

File name | Description
--------- | ------------
[0-preprocessor](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/hello_world/0-preprocessor) | Runs a C file through the preprocessor and saves the result into another file
[1-compiler](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/hello_world/1-compiler) | Compiles a C file but does not link
[2-assembler](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/hello_world/2-assembler) | Generates the assembly code of a C code and saves it in an output file
[3-name](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/hello_world/3-name) | Compiles a C file and creates an executable named `cisfun`
[4-puts.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/hello_world/4-puts.c) | Prints `"Programming is like building a multilingual puzzle"`
[5-printf.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/hello_world/5-printf.c) | Prints `with proper grammar, but the outcome is a piece of art`
[6-size.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/hello_world/6-size.c) | Prints the size of various types on the computer it is compiled
[100-intel](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/hello_world/100-intel) | Generates the assembly code of a C code and save it in an output file
[101-quote.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/hello_world/101-quote.c) | Prints `and that piece of art is useful" - Dora Korpar, 2015-10-19`
  
</details>
<!-- ⛔️ MD-MAGIC-EXAMPLE:END -->
