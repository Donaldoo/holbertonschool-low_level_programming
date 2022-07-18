#include "main.h"

/**
 * clear_bit - sets the vlaue of a bit to 0 at a given index
 * @n: ptr to the bit
 * @index: index of the bit to set value at
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index < 64)
	{
		i = ~(1 << index);
		*n = *n & i;
		return (1);
	}
	else
		return (-1);
}
