#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - entry point
 * @name: name to print
 * @f: ptr to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
