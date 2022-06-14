#include "main.h"
/**
 * print_triangle - entry point
 * @size: int
 * Return: void
 */
void print_triangle(int size)
{
	int width, height;

	for (width = 0; width < size; width++)
	{
		for (height = 0; height < size; height++)
		{
			if (height <= (size - width))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

