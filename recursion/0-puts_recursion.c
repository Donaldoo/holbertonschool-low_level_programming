#include "main.h"
/**
 * _puts_recursion - entry point
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	int len = 0, index;

	while (s[len])
		len++;
	for (index = 0; index < len; index++)
		_putchar(s[index]);
	_putchar('\n');
}
