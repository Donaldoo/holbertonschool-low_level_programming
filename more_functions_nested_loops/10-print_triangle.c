#include "main.h"
/**
 * print_square - entry point
 * @size: square size
 * Return: void
 */
void print_triangle(int size)
{
	int width, height;

	for (width = 0; width < size; width++)
	{
		for (height = 0; height < size; height++)
		{
			if (width <= size - height)
				_putchar(' ');
			else
				_putchar('#');
			_putchar('\n');
		}
		if (width < (size - height))
				_putchar('\n');
	}
}

