#include "lists.h"

/**
 * free_dlistint - frees a DLL
 * @head: pointer to the head of the DLL
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
