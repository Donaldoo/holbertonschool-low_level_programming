#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 *
 * Return: void (Success)
 */

void print_alphabet_x10(void)
{
	int l;
	int x = 0;

	while (x <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
		x++;
	}
}
