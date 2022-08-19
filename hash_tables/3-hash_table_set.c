#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the ahsh table
 * @ht: hash table to add the key
 * @key: key to be added, cannot be empty
 * @value: value associated with the key
 *
 * Return: 1 if success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *tmp;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}


	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);

	new->next = ht->array[index];
	ht->array[index] = tmp;


	return (1);
}
