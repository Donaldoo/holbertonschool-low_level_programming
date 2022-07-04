#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - entry point
 * @separator: string to be printed
 * @n: int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);
		if (separator != NULL)
			printf("%s", separator);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(str);
}
