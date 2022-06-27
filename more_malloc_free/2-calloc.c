#include "main.h"
/**
 * _calloc - entry point
 * @nmemb: num of elemetns
 * @size: size
 * Return: array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		array[i] = 2;

	return (array);
}
