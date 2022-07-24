# C - Doubly linked lists

Together with `next` pointer and `data` which are in a singly linked list, a doubly linked list contains an extra pointer, typically called `prev` (previous) pointer.
**A doubly linked list can be traversed in both directions, forward and backward.** </br>
</br>
**Structure of a node in doubly linked list can be given as:**
```
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}
```

![doubly-linked-list](https://user-images.githubusercontent.com/105612348/180640476-6b45a1a2-c64f-4fba-a397-d33a90f1cc0d.png)


## *Files*
*Files are programs written in **C language.***

File name | Description
---- | -----
[lists.h](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/lists.h) | Header file containing structure, definitions and prototypes for all types and functions written for the project.
[0-print_dlistint.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/0-print_dlistint.c) | Function that prints all the elements of a `dlistint_t` list.
[1-dlistint_len.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/1-dlistint_len.c) | Function that returns the number of elements in a linked `dlistint_t` list.
[2-add_dnodeint.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/2-add_dnodeint.c) | Function that adds a new node at the beginning of a `dlistint_t` list.
[3-add_dnodeint_end.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/3-add_dnodeint_end.c) | Function that adds a new node at the end of a `dlistint_t` list.
[4-free_dlistint.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/4-free_dlistint.c) | Function that frees a `dlistint_t` list.
[5-get_dnodeint.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/5-get_dnodeint.c) | Function that returns the nth node of a `dlistint_t` linked list.
[6-sum_dlistint.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/6-sum_dlistint.c) | Function that returns the sum of all the `data (n)` of a `dlistint_t` linked list.
[7-insert_dnodeint.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/7-insert_dnodeint.c) | Function that inserts a new node at a given position.
[8-delete_dnodeint.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/8-delete_dnodeint.c) | Function that deletes the node at index `index` of a `dlistint_t` linked list.
[100-password](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/100-password) | Contains the password for `crackme4` executable.
[crackme4.pyc](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/crackme4.pyc) | `crackme4` file.
[crackme4_pass](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/crackme4_pass) | Prints the password for the `crackme4` executable file.





