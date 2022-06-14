#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - entry point
 * @s: string printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int string;
	int rev;

	string = strlen(s) - 1;
	for (rev = string; rev >= 0; rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
