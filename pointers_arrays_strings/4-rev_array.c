#include "main.h"
/**
 * reverse_array - entry point
 * @a: int 1
 * @n: int 2
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n)
	{
		n--;
		temp = a[n];
		a[n] = a[i];
		a[i] = temp;
		i++;
	}
}
