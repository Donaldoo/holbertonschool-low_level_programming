# C - Search Algorithms
 **Search algorithm** is an algorithm which solves the search problem, namely, to **retrieve information** stored within some data structure.These algorithms are mainly classified in **2 categories** according to their type of search operations. And they are:
 * **Sequential Search:** In this, the list or array is traversed sequentially and every element is checked. For example: Linear Search
 * **Interval Search:** These algorithms are specifically designed for searching in sorted data-structures. These type of searching algorithms are more efficient than Linear Search method, as they repeatedly target the center of the search structure and divide the search space in 2 half. For Example: Binary Search.
 
 ## Resources 📋
 * [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
 * [Space complexity](https://www.geeksforgeeks.org/g-fact-86/)
 
 
 
 ### Function given for task 6
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```
 
 
 ## Files
 
 File names | Description
 --- | ---
[0-linear.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/0-linear.c) | Linear search algorithm implementation.
[1-binary.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/1-binary.c) | Binary search algorithm implementation.
[2-O](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/2-O) | Worst case `time complexity` of a linear search in an array of size `n`.
[3-O](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/3-O) |  Worst case `space complexity` of an iterative linear search in an array of size `n`.
[4-O](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/4-O) | Worst case `time complexity` of a binary search in an array of size `n`.
[5-O](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/5-O) | Worst case `space complexity` of a binary search in an array of size `n`.
[6-O](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/6-O) | Space complexity of function `allocate_map`.
[100-jump.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/100-jump.c) | Jump search algorithm implementation.
[101-O](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/101-O) | `Time complexity` (average case) of a jump search in an array of size `n`, using `step = sqrt(n)`.
[102-interpolation.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/102-interpolation.c) | Interpolation search algorithm implementation.
[103-exponential.c](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/103-exponential.c) | Exponential search algorithm implementation.
[107-O](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/107-O) | `Time complexity` (average case) of a jump search in a singly linked list of size `n`, using `step = sqrt(n)`.
[108-O](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/108-O) | `Time complexity` (average case) of a jump search in a skip list of size `n`, with an express lane using `step = sqrt(n)`.
[search_algos.h](https://github.com/Donaldoo/holbertonschool-low_level_programming/blob/main/search_algorithms/search_algos.h) | Header file containing all function prototypes used in this project.
