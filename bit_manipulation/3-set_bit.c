#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 ata  given index
 * @n: ptr to the bit
 * @index: index to set the vlaue at
 * Return: 1 if succes, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
		*n = *n | (1 << index);
		return (1);
	}
	else
		return (-1);
}
