#include "main.h"
/**
 * *_memset - entry point
 * @s: pointer
 * @b: constant byte
 * @n: memory bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
		s[i] = b;
	return (s);
}
