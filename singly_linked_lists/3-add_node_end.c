#include "lists.h"
/**
 * add_node_end - function that ads a new node at thee end of sinly linked list
 * @head: entry of the linked list
 * @str: duplicated string
 * Return: entry value
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t i = 0;
	list_t *new, *cpy;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	for ( ; str[i]; i++)
		;
	new->len = i;
	new->next = NULL;
	cpy = *head;
	if (cpy == NULL)
	{
		*head = new;
	}
	else
	{
		while (cpy->next)
			cpy = cpy->next;
		cpy->next = new;
	}
	return (*head);
}

