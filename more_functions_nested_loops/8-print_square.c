#include "main.h"
/**
 * print_square - entry point
 * @size: square size
 * Return: void
 */
void print_square(int size)
{
	int width, height;

	for (width = 0; width < size; width++)
	{
		for (height = 0; height < size; height++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

