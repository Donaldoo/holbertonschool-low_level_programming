#include "lists.h"

/**
 * sum_dlistint - finds the sum of all elements in the DLL
 * @head: pointer to the head of the DLL
 * Return: sum of elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
