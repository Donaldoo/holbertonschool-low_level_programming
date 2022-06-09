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

	for (column = 0; column <= 9; column++)
	{
		for (row = 0; row <= 9; row++)
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
				_putchar(prod + '0');
			}
			else if (mul >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
