#include "lists.h"

/**
 * get_nodeint_at_index - locates node in the given list
 * @head: ptr to the list's head
 * @index: index of node to locate
 * Return: located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
