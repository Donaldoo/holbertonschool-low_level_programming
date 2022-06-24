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
 * @length: string length
 * @i: int
 * Return: 1 if palindrome, 0 if not
 */

int char_compare(char *s, int length, int i)
{
	if (s[i] == s[length / 2])
	{
		return (1);
	}
	if (s[i] == s[length - i - 1])
	{
		return (char_compare(s, length, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - entry point
 * @s: string
 * Return: 1 if palindrome
 */

int is_palindrome(char *s)
{
	int length = _strlen(s);
	int i = 0;

	if (!*s)
	{
		return (1);
	}
	return (char_compare(s, length, i));
}
