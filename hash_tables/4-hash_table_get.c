#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated witha  key
 * @ht: hash table to look into
 * @key: key we need to look for
 *
 * Return: the value associated with the key, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	if (tmp == NULL)
		return (NULL);

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
