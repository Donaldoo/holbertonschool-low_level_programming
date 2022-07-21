#include "lists.h"


/**
 * get_dnodeint_at_index - locates a node at a given index and returns
 * @head: pointer to the head of the DLL
 * @index: index of the node to locate
 * Return: the address of the located node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
