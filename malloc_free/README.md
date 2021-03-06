# C - malloc, free

The **malloc()** function stands for **memory allocation**, and is used to allocate a block of memory on the heap. It reserves the memory space for a specified size and returns the null pointer, which points to the memory location. The pointer returned is of type void. Syntax:
```
ptr = malloc(size * sizeof(type));
```
</br>

To free the dynamically allocated memory created with malloc we use `free()`. Syntax:
```
free(ptr);
```

### *Files*
*Files are functions written in **C language.***

File name | Description
--- | ---
[0-create_array.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/malloc_free/0-create_array.c) | Function that creates an array of chars, and initializes it with a specific char.
[1-strdup.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/malloc_free/1-strdup.c) | Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
[2-str_concat.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/malloc_free/2-str_concat.c) | Function that concatenates two strings.
[3-alloc_grid.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/malloc_free/3-alloc_grid.c) | Function that returns a pointer to a 2 dimensional array of integers.
[4-free_grid.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/malloc_free/4-free_grid.c) | Function that frees a 2 dimensional grid previously created by `alloc_grid` function.
[100-argstostr.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/malloc_free/100-argstostr.c) | Function that concatenates all the arguments of your program.
