#include "main.h"
/**
 * times_table - entry point
 *
 * return: 0
 */

void print_times_table(int n)
{
	int column;
	int row;
	int mul;

	if (n >= 0 && n < 16)
	{
		for (column = 0; column <= n; column++)
		{
			for (row = 0; row <=n; row++)
			{
			mul = column * row;
			if (row == 0)
			{
				_putchar('0');
			}
			else if (mul <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
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
