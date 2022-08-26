#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 *			using binary search algorithm
 * @array: sorted array to search
 * @size: size of the array
 * @value: the value we need to find
 *
 * Return: value, if value not found return - 1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	print_array(array, low, size);

	while (low < high)
	{
		mid = (low + high) / 2;
		if (array[mid] < value)
		{
			low = mid + 1;
			print_array(array, low, size);
		}
		else if (array[mid] > value)
		{
			high = mid;
			print_array(array, low, high + 1);
		}
		else
			return (mid);
	}
	return (-1);
}


/**
 * print_array - Prints an array of integers
 * @array: The array to be printed
 * @position: Index to start printing the array
 * @size: Number of elements in @array
 */
void print_array(int *array, size_t position, size_t size)
{
	size_t i;

	printf("Searching in array: ");

	i = position;
	while (array && i < size)
	{
		if (i > position)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
