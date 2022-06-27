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

	array = malloc(nmemb * size);
	return (array);
}
