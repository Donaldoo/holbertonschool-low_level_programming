#include "main.h"
/**
 *
 *
 *
 *
 */

void *malloc_checked(unsigned int b)
{
	int *str = malloc(b);

	if (str == NULL)
		exit(98);
	return (str);
}
