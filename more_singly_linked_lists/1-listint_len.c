#include "lists.h"

/**
 * listint_len - finds num of elemetns in a linked list
 * @h: pointer to head of the list
 * Return: num of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
