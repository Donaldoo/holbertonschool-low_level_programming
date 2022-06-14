#include <stdio.h>
#include "main.h"

/**
 * print_rev - entry point
 * @s: string printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int string;

	for (string = 0; s[string] != '\0'; string++)
	{
	}
	for (string -= -1; string >= 0; string--)
		_putchar(s[string]);
	_putchar('\n');
}
