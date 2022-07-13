#include"lists.h"

/**
 * add_nodeint - func to add a new node at the beginning of a list
 * @head: ptr to address of list's head
 * @n: int new node contains
 * Return: NULL if func fails, add of new element if not
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
