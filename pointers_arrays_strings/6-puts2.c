#include "main.h"
/**
 * puts2 - entry point
 * @str: string
 * Return: 0
 */

void puts2(char *str)
{
	int length, printChar;

	length = 0;
	while (str[length] != '\0')
		length++;
	for (printChar = 0; printChar < length; printChar += 2)
		_putchar(str[printChar]);
	_putchar('\n');
}
