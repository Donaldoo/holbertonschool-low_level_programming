#include "lists.h"
/**
 * print_listint - function to print all elements of list
 * @h: pointer to list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
