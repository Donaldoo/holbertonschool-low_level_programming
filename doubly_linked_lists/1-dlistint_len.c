#include "lists.h"

/**
 * dlist_len - finds the number of elements in a DLL
 * @h: pointer to the head of the DLL
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
