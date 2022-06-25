# Static libraries
**A static library is an archive file containing object files that remain static until the program is recompiled.** This static library can be used as a single entity in a linking phase of a program. *A static library provides an effective mechanism for reusing code.*</br>
To create the object files that we want to add to our static library we use the command:
```
$ gcc -c -Wall -Werror -Wextra *.c
```
Once we have the object files we can add them to an existing static library (or create a new one) using the GNU ar (archiver) program. We can use the following command:
```
ar -rc libname.a *o
```

### *Files*

File name | Description
--------- | -----------
[main.h](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/static_libraries/main.h) | Header file that contains all the prototypes of the functions.
[libmy.a](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/static_libraries/libmy.a) | Static library that contains functions.
[create_static_lib.sh](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/static_libraries/create_static_lib.sh) | Script that creates a static library called 'liball.a' from all the '.c' files located in the current directory.
