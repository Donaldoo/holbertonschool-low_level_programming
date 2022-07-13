#include "lists.h"

/**
 *
 *
 *
 */
int pop_listint(listint_t **head)
{
	int h_data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	h_data = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (h_data);
}
