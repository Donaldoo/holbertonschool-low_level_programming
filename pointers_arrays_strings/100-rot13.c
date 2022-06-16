#include "main.h"
/**
 * *rot13 - entry point
 * @s: string
 * Return: string
 */

char *rot13(char *s)
{
	int length = 0;
	int index;
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[length])
	{
		for (index = 0; index < 52; index++)
		{
			if (s[length] == alphabet[index])
				s[length] = rot13[index];
		}
		length++;
	}
	return (s);
}
