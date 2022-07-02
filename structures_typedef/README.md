# C - Structures, typedef

A **structure** is a user defined data type that allows to combine data items of different kinds.</br>
</br>
**Structure declaration:**
```
struct User
{
char *name;
char *email;
int age;
};
```
To access the elements of a structure we use the `.` symbol.
```
int main(void)
{
  struct User user;
  
  user.age = "24";
  return (0);
}
```

**Pointers to structures:** </br>
To access elements of a pointer to a structure, first we have to dereference the pointer and then access to the data using the `.` symbol or just by using the `->` symbol.
```
int main(void
{
  struct User user;
  struct User *ptr;
  
  (*ptr).age = "24";
  ptr->age = "24";    /* Both work the same */
  return (0);
}
```
</br>

### Typedef: </br>
The C programming language provides a keyword called **typedef**, which can be used to give a type, a new name.

</br>

### *Files*
*Files are functions written in **C language.***


<!-- ⛔️ MD-MAGIC-EXAMPLE:START (TOC:collapse=true&collapseText=Click to expand) -->
<details>
<summary>Click to expand</summary>

File name | Description
--- | ---
[dog.h](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/structures_typedef/dog.h) | Header file that contains a structure `struct dog`.
[1-init_dog.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/structures_typedef/1-init_dog.c) | Function that initialize a variable of type `struct dog`.
[2-print_dog.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/structures_typedef/2-print_dog.c) | Function that prints a `struct dog`.
[4-new_dog.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/structures_typedef/4-new_dog.c) | Function that creates a new dog structure.
[5-free_dog.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/structures_typedef/5-free_dog.c) | Function that frees dog structure.

</details>
<!-- ⛔️ MD-MAGIC-EXAMPLE:END -->



