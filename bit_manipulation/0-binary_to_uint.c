#include "main.h"

/**
 * binary_to_uint - converts a binary number to an nisgned int
 * @b: string that contains 0 and 1 chars
 * Return: converted int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int base = 1, length = 0;

	if (!b)
		return (0);

	while (b[length])
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		if (b[length] == '1')
			num += base;
		base *= 2;
	}
	return (num);
}
