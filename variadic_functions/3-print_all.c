#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_char - entry point
 * @arg: arg list
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
	va_end(arg);
}

/**
 * print_int - entry point
 * @arg: arg list
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
	va_end(arg);
}

/**
 * print_float - entry point
 * @arg: arg list
 */
void print_float(va_list arg)
{
	float flt;

	flt = va_arg(arg, double);
	printf("%f", flt);
	va_end(arg);
}

/**
 * print_string - entry point
 * @arg: arg list
 */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
	va_end(arg);
}

/**
 * print_all - entry point
 * @format: string of arg types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *format_cpy;
	format_t formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i, j;
	char *separator;

	i = 0;
	separator = "";
	format_cpy = format;
	va_start(args, format);
	while (format_cpy && format_cpy[i] != '\0')
	{
		j = 0;
		while (formats[j].symbol)
		{
			if (formats[j].symbol[0] == format_cpy[i])
			{
				printf("%s", separator);
				(formats[j].f)(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
