#include "main.h"
/**
 * swap_int - entry point
 * @a: int 1
 * @b: int 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

