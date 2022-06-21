#include "main.h"
/**
 * _strspn - entry point
 * @s: pointer to string
 * @accept: pointer
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int k;
	unsigned int numBytes = 0;

	for ( ; s[i]; i++)
	{
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
			{
				numBytes++;
				break;
			}
			if (accept[k + 1] == '\0')
				return (numBytes);
		}
	}
	return (numBytes);
}
