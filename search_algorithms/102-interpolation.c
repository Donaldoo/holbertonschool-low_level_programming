#include "search_algos.h"

/**
 * interpolation_search - search algorithm implemention
 * @array: array to search
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index of the value, -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n",
					pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] > value)
			high = pos;
		else if (array[pos] < value)
			low = pos + 1;
		else
			return (pos);
	}
	return (-1);
}
