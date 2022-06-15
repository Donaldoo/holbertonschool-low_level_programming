#include "main.h"

/**
 * _puts - entry point
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int length, index;

	length = 0;
	while (str[length] != '\0')
		length++;
	for (index = 0; index < length; index++)
		_putchar(str[index]);
	_putchar('\n');
}
