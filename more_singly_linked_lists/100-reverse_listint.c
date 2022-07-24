#include "lists.h"

/**
 * reverse_listint - reverses a singly linked list
 * @head: pointer to the address of the head of the linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *new_next;

	if (*head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		new_next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = new_next;
	}
	(*head)->next = prev;

	return (*head);
}
