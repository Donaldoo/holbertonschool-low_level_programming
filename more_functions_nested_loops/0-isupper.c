#include "main.h"
/**
 * _isupper - entry point
 * @c:char code checks
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
