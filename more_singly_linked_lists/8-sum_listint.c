#include "lists.h"

/**
 * sum_listint - find sum of all data in linked list
 * @head: ptr to head of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;

	while(head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

