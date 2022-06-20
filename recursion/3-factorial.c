#include "main.h"
/**
 * factorial - entry point
 * @n: integer
 * Return: -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
