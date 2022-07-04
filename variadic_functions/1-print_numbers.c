#include "variadic_functions.h"
/**
 * print_numbers - entry point
 * @separator: string to be printed
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, nums;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(args, unsigned int);
		printf("%d", nums);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}


