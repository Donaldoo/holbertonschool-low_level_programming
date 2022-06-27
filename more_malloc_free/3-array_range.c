#include "main.h"
/**
 * array_range - entry point
 * @min: min
 * @max: max
 * Return: array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		array[i] = min++;
	return (array);
}
