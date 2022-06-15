#include "main.h"
/**
 * puts_half - entry point
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int n = length;

	while (str[length])
		length++;
	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length + 1) / 2;
	while (n < length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
