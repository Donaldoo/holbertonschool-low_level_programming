#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: Void (Success)
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}

