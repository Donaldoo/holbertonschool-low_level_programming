#include "main.h"

/**
 * _abs -entry point
 * @n : character code checks
 * Return: 0 or +-n
 */

int _abs(int n)
{
	if (n > 0 || n == 0)
		return (n);
	else
		return (-n);
}
