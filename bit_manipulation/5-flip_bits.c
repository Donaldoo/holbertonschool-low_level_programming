#include "main.h"

/**
 * flip_bits - returns the bits needed to be flipped
 *			to get from one number to another
 * @n: number to be flipped
 * @m: number to flip n to
 * Return: bits needed to flip n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^ m, bits = 0;

	while (r != 0)
	{
		bits++;
		r = r >> 1;
	}
	return (bits);
}
