#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *  *  * main - Entry point
 *   *   *
 *    *    * Return: Always 0 (Success)
 */
int main(void)
{
	char l;
	char L;

	for (l = '0'; l <= '9'; l++)
	{
		putchar(l);
	}
	for (L = 'a'; L <= 'f'; L++)
	{
		putchar(L);
	}
	putchar('\n');
	return (0);
}
