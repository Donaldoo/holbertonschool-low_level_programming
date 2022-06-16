#include "main.h"
/**
 * _strcmp - entry point
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if s1 and s2 are the same, 1 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int len = 0;
	int result = 0;

	while (s1[len] || s2[len])
	{
		if (s1[len] != s2[len])
		{
			result = (s1[len] - s2[len]);
			break;
		}
		else
			len++;
	}
	return (result);
}
