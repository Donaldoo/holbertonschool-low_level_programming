# C - Function pointers

**Declaration of a function pointer:**
```
int (*func)(int a, int b);
```
A function pointer points to code, not data. Typically a function pointer stores the start of executable code. Unlike normal pointers, we do not allocate de-allocate memory using function pointers. We can have an array of function pointers just like normal pointers:
```
void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
```

### *Files*
*Files are programms written in **C language.***

File name | Description
--- | ---
[function_pointers.h](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/function_pointers/function_pointers.h) | Header file that contains all prototypes for tasks 0-2.
[0-print_name.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/function_pointers/0-print_name.c) | Function that prints a name.
[1-array_iterator.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/function_pointers/1-array_iterator.c) | Function that executes a function given as a parameter on each element of an array.
[2-int_index.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/function_pointers/2-int_index.c) | Function that searches for an integer.
[3-calc.h](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/function_pointers/3-calc.h) | Header file containing all the function prototypes and data structures used by the program.
[3-op_functions.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/function_pointers/3-op_functions.c) | File that contains functions that calculates arithmetic operations.
[3-get_op_func.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/function_pointers/3-get_op_func.c) |  File that contains the function that selects the correct function to perform the operation asked by the user.
[3-main.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/function_pointers/3-main.c) | C program that performs simple mathematical operations.
