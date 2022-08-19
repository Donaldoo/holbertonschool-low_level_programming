#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	hash_node_t *tmp;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head != NULL && head->next == NULL)
		{
			free(head->key);
			free(head->value);
			free(head);
		}
		else if (head != NULL && head->next != NULL)
		{
			while (head)
			{
				tmp = head->next;
				free(head->key);
				free(head->value);
				free(head);
				head = tmp;
			}
			free(head);
		}
	}
	free(ht->array);
	free(ht);
}
