#include "main.h"
/**
 * print_last_digit - entry point
 * @n: character code checks
 * Return: last digit
 */

int print_last_digit(int n)
{
	int x = n % 10;
	_putchar(x + '0');
	if (x < 0)
		x *= -1;

	return (x);
}
