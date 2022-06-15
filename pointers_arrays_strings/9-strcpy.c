#include "main.h"
/**
 * _strcpy - entry point
 * @dest: pointer
 * @src: point
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int var;

	for (var = 0; src[var] != '\0'; var++)
		dest[var] = src[var];
	dest[var] = '\0';
	return (dest);
}
