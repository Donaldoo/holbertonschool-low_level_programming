C - Pointers, arrays and strings
=

### [*Pointers*](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
A **pointer** is a variable that stores the address of another variable. Pointers can be of any type and are created using the `*` sign, e.g `int *ptr`.

### [*Arrays*](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
An **array** is a variable that can store multiple values of the same type. Arrays are created in this way: `dataType arrayName[arraySize]`. Arrays have 0 as the first index.

### [*Strings*](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
A **string** is a **sequence of characters** terminated with a null character `\0` . 


## *Files*
🟢 **"Pointers, arrays and strings"** project files, written in C language:

<!-- ⛔️ MD-MAGIC-EXAMPLE:START (TOC:collapse=true&collapseText=Click to expand) -->
<details>
<summary>Click to expand</summary>


File name | Description
:-------- | :----------
[0-reset_to_98.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/0-reset_to_98.c) | Function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.
[1-swap.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/1-swap.c) | Function that swaps the values of two integers.
[2-strlen.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/2-strlen.c) | Function that returns the length of a string.
[3-puts.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/3-puts.c) | Function that prints a string to `stdout`.
[4-print_rev.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/4-print_rev.c) | Function that prints a string in reverse.
[5-rev_string.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/5-rev_string.c) | Function that reverses a string.
[6-puts2.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/6-puts2.c) | Function that prints every other character of a string, starting with the first character.
[7-puts_half.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/7-puts_half.c) | Function that prints the second half of a string.
[8-print_array.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/8-print_array.c) | Function that prints `n` elements of an array of integers.
[9-strcpy.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/9-strcpy.c) | Copies the string pointed to by `src`, including the terminating null byte, to the buffer pointed to by `dest`.
[100-atoi.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/100-atoi.c) | Converts a string to an integer.


</details>
<!-- ⛔️ MD-MAGIC-EXAMPLE:END -->

🟠 **"More pointers, arrays and strings"** project files, written in C language:

<!-- ⛔️ MD-MAGIC-EXAMPLE:START (TOC:collapse=true&collapseText=Click to expand) -->
<details>
<summary>Click to expand</summary>

File name | Description
:--------- | :-----------
[0-strcat.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/0-strcat.c) | Function that concatenates two strings.
[1-strncat.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/1-strncat.c) | Function that concatenates two strings, using `n` bytes from `src`.
[2-strncpy.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/2-strncpy.c) | Function that copies a string.
[3-strcmp.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/3-strcmp.c) | Function that compares two strings.
[4-rev_array.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/4-rev_array.c) | Function that reverses the content of an array of integers.
[5-string_toupper.c	](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/5-string_toupper.c	) | Function that changes all lowercase letters of a string to uppercase.
[6-cap_string.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/6-cap_string.c) | Function that capitalizes all words of a string.
[7-leet.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/7-leet.c) | Function that encodes a string into [1337](https://en.wikipedia.org/wiki/Leet).
[100-rot13.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/100-rot13.c) | Function that encodes a string using [rot13](https://en.wikipedia.org/wiki/ROT13).

</details>
<!-- ⛔️ MD-MAGIC-EXAMPLE:END -->

🔴 **"Even more pointers, arrays and strings"** project files, written in C language:

<!-- ⛔️ MD-MAGIC-EXAMPLE:START (TOC:collapse=true&collapseText=Click to expand) -->
<details>
<summary>Click to expand</summary>
  
File name | Description
:-------- | :-----------
[0-memset.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/0-memset.c) | Function that fills memory with a constant byte.
[1-memcpy.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/1-memcpy.c) | Function copies `n` bytes from memory area `src` to memory area `dest`.
[2-strchr.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/2-strchr.c) | Function that locates a character in a string.
[3-strspn.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/3-strspn.c) | Function that gets the length of a prefix substring.
[4-strpbrk.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/4-strpbrk.c) | Function that searches a string for any of a set of bytes.
[5-strstr.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/5-strstr.c) | Function that locates a substring.
[7-print_chessboard.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/7-print_chessboard.c) | Function that prints the chessboard. 
[8-print_diagsums.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/8-print_diagsums.c) | Function that prints the sum of the two diagonals of a square matrix of integers.
[100-set_string.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/100-set_string.c) | Function that sets the value of a pointer to a char.
[101-crackme_password](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/pointers_arrays_strings/101-crackme_password) | File that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable.
  
  
</details>
<!-- ⛔️ MD-MAGIC-EXAMPLE:END -->
