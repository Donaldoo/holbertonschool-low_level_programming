#include "lists.h"

/**
 * print_dlistint - prints all elements of the given DLL (double linked list)
 * @h: pointer to the header of the given list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}
