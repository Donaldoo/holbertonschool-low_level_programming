#include "lists.h"
#include <string.h>
/**
 * add_node - entry point
 * @head: ptr to head of the list
 * @str: string to be added to list
 * Return: add of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
