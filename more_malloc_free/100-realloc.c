#include "main.h"
#include <stdlib.h>
/**
 * _realloc - entry point
 * @ptr: ptr to the previously allocated memory
 * @old_size: size of allocated memory
 * @new_size: new size of the new memory
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}


