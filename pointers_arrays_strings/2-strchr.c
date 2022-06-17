#include "main.h"
/**
 * *_strchr - entry point
 * @s: pointer to the string s
 * @c: character
 * Return: 0 if char not found, else pointer to the first occurence of char c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
