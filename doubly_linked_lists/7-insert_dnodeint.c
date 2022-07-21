#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the address of the head of the DLL
 * @idx: index where the node should be added
 * @n: data the node contains
 * Return: address of the new node, NULL if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;

	/* allocate memory and initialize the new node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->prev = NULL;
	new->n = n;
	new->next = NULL;

	/* if index is 0 call the
 	*      add to the beginning function created in the previous tasks */
	if (idx == 0)
		return (add_dnodeint(h, n));

	/*  if index != 0, traverse to the node before the given index
 	*                      and give temp its values */
	while (idx > 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		idx--;
	}
	/* if the next of the node at the given index is NULL, call
 	*      add to the end of the list function created in previous tasks */
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	/* set prev of new node to the previous node (node before the given index) */
	new->prev = temp;
	/* set next of new node to the next of the previous node */
	new->next = temp->next;
	/* set prev of the new node's next to the new node */
	temp->next->prev = new;
	/* set next of previous node to the new node */
	temp->next = new;

	return (new);
}
