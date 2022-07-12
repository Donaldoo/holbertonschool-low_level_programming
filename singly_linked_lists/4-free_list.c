#include "lists.h"

/**
 * free_list - function that frees singly linked list
 * @head: entry of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *cpy;

	while (head != NULL)
	{
		cpy = head->next;
		free(head->str);
		free(head);
		head = cpy;
	}
}
