#include "main.h"
/**
 * main - entry point
 * @argc: num of args
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg1, arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	printf("%d\n", arg1 * arg2);
	return (0);
}
