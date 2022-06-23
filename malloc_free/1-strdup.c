#include "main.h"
/**
 * _strdup - entry point
 * @str: string
 * Return: array
 */

char *_strdup(char *str)
{
	char *array;
	int len, i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
	array = malloc(len * sizeof(char) + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		array[i] = str[i];
	return (array);
}
