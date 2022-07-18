#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index 
 * @n: bit
 * @index: index of the bit to get the value at
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (n > 0 && index < 64)
	{
		b = (n >> index) & 1;
		return (b);
	}
	else
		return (-1);
}
