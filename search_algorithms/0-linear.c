#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array
 *			using linear search algorithm
 * @array: Array to search
 * @size: size of the array
 * @value: value to look for
 *
 * Return: the index where value is located, if not found return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
