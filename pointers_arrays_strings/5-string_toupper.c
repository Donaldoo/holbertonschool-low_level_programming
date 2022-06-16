#include "main.h"
/**
 * *string_toupper - entry point
 * @string: string containing letters to convert to uppercase
 * Return: 0
 */

char *string_toupper(char *string)
{
	int i;

	for (i = 0; string[i]; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] = string[i] - 32;
	}
	return (string);
}
