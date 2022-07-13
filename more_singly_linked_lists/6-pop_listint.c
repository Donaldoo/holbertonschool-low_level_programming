#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pr to add of list's head node
 * Return: head node's data, null if list is empty
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
