#include "main.h"
/**
 * *_memcpy - entry point
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
