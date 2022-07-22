#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: pointer to the address of the head of the DLL
 * @index: index of the node to be deleted
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (temp == NULL || *head == NULL)
		return (-1);

	while (index > 0)
	{
		temp = temp->next;
		index--;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		if (temp->prev != NULL)
			temp->prev->next = temp->next;

		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
