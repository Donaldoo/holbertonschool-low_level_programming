#include "lists.h"
/**
 * list_len - entry point
 * @h: linked list
 * Return: elements number
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
