#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
			printf("%i ", i);
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i < 100)
			printf("Buzz ");
		{
			if (i == 100)
				printf("Buzz");
		}
	}
	putchar('\n');
	return (0);
}
