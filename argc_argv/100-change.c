#include "main.h"
/**
 * main - entry point
 * @argc: num of args
 * @argv: array of args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int money, cents;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	for ( ; cents > 0; money++)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
	}
	printf("%d\n", money);
	return (0);
}
