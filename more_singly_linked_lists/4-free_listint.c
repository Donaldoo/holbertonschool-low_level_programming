#include "lists.h"

/**
 * free_listint - frees list
 * @head: ptr to list's head
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
