#include "hash_tables.h"

/**
 * shash_table_create - creates a new sorted ahsh table
 * @size: size of the new hash table
 *
 * Return: pointer to the new created hash table, NULL if error occurs
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);

	new->shead = NULL;
	new->stail = NULL;

	return (new);
}

/**
 * shash_table_set - adds an element to a sorted hash table
 * @ht: hash table
 * @key: key to be added, cannot be empty
 * @value: value associated with the key
 *
 * Return: 1 if succes, 0 if failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new, *tmp;

	if (ht == NULL || key || NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->snext;
	}

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);

	new->next = ht->array[index];
	ht->array[index] = new;

	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key to look for
 *
 * Return: value associated with the key, NULL if failure
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index > ht->size)
		return (NULL);

	tmp = ht->shead;
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a sorted linked list
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	tmp = ht->shead;
	while (tmp)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table to be printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	tmp = ht->stail;
	while (tmp)
	{
		printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
		sep = ", ";
		tmp = tmp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *head, *tmp;

	if (ht == NULL)
		return;

	head = ht->shead;
	while (head)
	{
		tmp = head->snext;
		free(head->key);
		free(head->value);
		free(head);
		head = tmp;
	}
	free(ht->array);
	free(ht);
}
