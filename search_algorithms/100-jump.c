#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 *			using jump search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index where the value is located, -1 if it is not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end;

	if (array == NULL || size == 0)
		return (-1);

	end = sqrt(size);

	while (array[end] <= value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end = end + sqrt(size);
		if (end > size - 1)
		{
			end = size;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i < end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
