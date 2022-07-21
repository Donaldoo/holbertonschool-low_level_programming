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
	unsigned int node;

	if (head == NULL)
		return (-1);

	for (node = 0; node < (index -1); node++)
		temp = temp->next;

	if (node == 0)
		*head = temp->next;
	
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
