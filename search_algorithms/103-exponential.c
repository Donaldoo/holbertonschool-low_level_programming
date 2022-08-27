#include "search_algos.h"
#include <math.h>
#include <time.h>

/* macro */
#define MIN(A, B) ((A) < (B) ? (A) : (B))

/**
 * binarySearch - binary search algorithm
 * @array: sorted array
 * @low: min index
 * @high: max index
 * @value: value to find
 *
 * Return: index where value is located, -1 if it is not found
 */
int binarySearch(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (array == NULL)
		return (-1);


	while (low < high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] < value)
			low = mid + 1;

		else if (array[mid] > value)
			high = mid;

		else
			return (mid);
	}
	return (-1);
}

/**
 * exponential_search - exponential search algorithm
 * @array: sorted array to search
 * @size: size of the array
 * @value: value to find
 *
 * Return: index where value is located, -1 if it is not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, low, high;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	low = i / 2;
	high = MIN(i, size - 1);
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);

	return (binarySearch(array, low, high, value));
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
	while (i < size)
	{
		printf(" %d,", array[i]);
		++i;
	}
	printf(" %d\n", array[i]);
}
