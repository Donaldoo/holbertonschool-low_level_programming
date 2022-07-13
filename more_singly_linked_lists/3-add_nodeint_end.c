#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of the list
 * @head: ptr to the add of list's head
 * @n: int new node contains
 * Return: add of new elements, if func fails return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (last);
}
