# Functions and nested loops

## *Nested loops*
A nested loop is a loop within another loop.

## *Functions*
A function is a block of code which only runs when it is called. Functions are used to perform certain actions and they are important for reusing code: Define the code once, and use it many times.
</br>
</br>
**Syntax of a function**
```
return_type function_name(argument list)
{
       block of code
}
```
* **return_type:** Return type can be of any data type such as int, double, char, void, short etc.
* **function_name:** It can be anything, however it is advised to have a meaningful name.
* **argument list:** Argument list contains variables names along with their data types. e.g, A function which is used to add two integer variables, will be having two integer argument. `(int num1, int num2)`
* **block of code:** Group of C statements, which will be executed when we call the function.

## *C header files*
Header files contain the set of predefined standard library functions. The `#include` preprocessing directive is used to include the header files with `.h` extension in the program.</br>
`#include <file>` - This form is used for system header files. </br>
`#include "file"` - This form is used for header files of your own program.


## *Files*
Files are scripts or programs written in C.

<!-- ⛔️ MD-MAGIC-EXAMPLE:START (TOC:collapse=true&collapseText=Click to expand) -->
<details>
<summary>Click to expand</summary>

File name | Description
--------- | ------------
[0-putchar.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/0-putchar.c) | Prints `_putchar`
[1-alphabet.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/1-alphabet.c) | Prints the alphabet in lowercase
[2-print_alphabet_x10.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/2-print_alphabet_x10.c) | Prints 10 times the alphabet, in lowercase
[3-islower.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/3-islower.c) | Checks for lowercase character
[4-isalpha.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/4-isalpha.c) | Checks for alphabetic character
[5-sign.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/5-sign.c) | Prints the sign of a number
[6-abs.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/6-abs.c) | Computes the absolute value of an integer
[7-print_last_digit.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/7-print_last_digit.c) | Prints the last digit of a number
[8-24_hours.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/8-24_hours.c) | Prints every hour and minute of the day
[9-times_table.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/9-times_table.c) | Prints the 9 times table, starting with 0
[10-add.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/10-add.c) | Adds two integers and returns the result
[11-print_to_98.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/11-print_to_98.c) | Prints all natural numbers from `n` to `98`
[100-times_table.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/100-times_table.c) | Prints the `n` times table, starting with 0
[101-natural.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/101-natural.c) | Computes and prints the sum of all the multiplies of `3` or `5` below `1024`
[102-fibonacci.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/102-fibonacci.c) | Prints the first 50 Fibonacci numbers, starting with `1` and `2`
[103-fibonacci.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/103-fibonacci.c) | Finds and prints the sum of the even-valued terms in Fibonacci sequence whose values do not exceed 4,000,000
[104-fibonacci.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/functions_nested_loops/104-fibonacci.c) | Finds and prints the first 98 Fibonacci numbers
  
</details>
<!-- ⛔️ MD-MAGIC-EXAMPLE:END -->
