#include "main.h"
/**
 * rev_string - entry point
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int length, rev;
	char swapChar;

	rev = 0;
	length = 0;
	while (s[length] != 0)
		length++;
	while (rev < length)
	{
		length--;
		swapChar = s[rev];
		s[rev] = s[length];
		s[length] = swapChar;
		rev++;
	}
}
