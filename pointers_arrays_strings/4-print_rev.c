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
	int length = 0;
	int rev;

	while (s[length] != '\0')
		length++;
	for (rev = length - 1; rev >= 0; rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
