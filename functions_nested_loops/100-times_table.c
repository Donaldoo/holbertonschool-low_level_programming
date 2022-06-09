#include "main.h"
/**
 * print_spaces - prints ' '
 * Return: void
 */
void print_spaces(void)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}

/**
 * print_times_table - entry point
 * @n: int code checks
 * Return: void
 */
void print_times_table(int n)
{
	int column, row, mul;

	if (n >= 0 && n < 16)
	{
		for (column = 0; column <= n; column++)
		{
			for (row = 0; row <= n; row++)
			{
				mul = column * row;
			if (row == 0)
			{
				_putchar('0');
			}
			else if (mul <= 9)
			{
				_putchar(',');
				print_spaces();
				_putchar(mul + '0');
			}
			else if (mul >= 10 && mul < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if (mul >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 100) + '0');
				_putchar(((mul % 100) / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			}
		_putchar('\n');
		}
	}
}
