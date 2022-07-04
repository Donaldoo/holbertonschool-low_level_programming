# C - Preprocessor

**Preprocessor** is a text substitution tool and it instructs the compiler to do required pre-processing before the actual compilation. All preprocessor commands begin with a hash symbol `#`. Some of the common uses of C preprocessors are:
* Including Header Files: `#include`. </br>
The `#include` preprocessor is used to include header files to C programs.
* Macros using `#define`. </br>
A macro is a fragment of code that is given a name. We can define a macro in C using the `#define` preprocessor directive.
* Conditional Compilation
Conditional directives can be used to instruct the preprocessor whether to include a block of code or not. It's similar to a `if` statement but with one difference.
The `if` statement is tested during the execution time to check whether a block of code should be executed or not, while the conditionals are used to include or skip a block of code in a program before execution.

### *Files*
*Files are programms written in **C language.***

File name | Description
---- | ----
[0-object_like_macro.h](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/preprocessor/0-object_like_macro.h) | Header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.
[1-pi.h](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/preprocessor/1-pi.h) | Header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.
[2-main.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/preprocessor/2-main.c) | Program that prints the name of the file it was compiled from.
[3-function_like_macro.h](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/preprocessor/3-function_like_macro.h) | Header file that defines a function-like macro `ABS(x)` that computes the absolute value of a number `x`.
[4-sum.h](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/preprocessor/4-sum.h) | Header file that defines a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.
