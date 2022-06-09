#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: int code checks
 * Return: 0
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i\n", i);
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("%i\n", i);
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
