#include "main.h"
/**
 * _strlen - find string length
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	s++;
	return (1 + _strlen(s));
}

/**
 * char_compare - compare string chars
 * @s: string
 * @len: string length
 * Return: 1 if palindrome, 0 if not
 */

int char_compare(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == (len - s - 1));
	{
		return (char_compare());
	}
	else
		return (0);
}

/**
 * is_palindrome - entry point
 * @s: string
 * Return: 1 if palindrome
 */

int is_palindrome(char *s)
{
	if (_strlen(s) <= 1)
		return (1);
	return();
}
