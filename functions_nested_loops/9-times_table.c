#include "main.h"
/**
 * times_table - entry point
 *
 * return: 0
 */

void times_table(void)
{
	int column;
	int row;
	int prod;

	for (column = 0; column <= 9; column++)
	{
		for (row = 0; row <= 9; row++)
		{
			prod = column * row;
			if (prod <= 9)
				_putchar(prod + '0');
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (row < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
