#include "main.h"
/**
 * find_prime - entry point
 * @n: int
 * @i: int
 * Return: 1 is prime number
 */

int find_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + find_prime(n, i + i));
}

/**
 * is_prime_number - entry point
 * @n: int
 * Return: 1 if prime num
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (find_prime(n, 2));
}
