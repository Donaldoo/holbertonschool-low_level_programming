#include "main.h"

/**
 * print_sign - Entry point
 * @n: the character the code checks
 * Return: 1, 0 or -1 depending on n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
