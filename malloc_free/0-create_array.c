#include "main.h"
/**
 * create_array - entry point
 * @size: array size
 * @c: char
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return ('\0');
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for ( ; i < size; i++)
		array[i] = c;
	return (array);
}
