#include "main.h"
/**
 * main -entry point
 * @argc: num of arguments in command line
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", *argv);
	return (0);
}
