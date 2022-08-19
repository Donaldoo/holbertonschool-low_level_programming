#include "hash_tables.h"

/**
 * key_index - gices the index of a key
 * @key: key
 * @size: size of the hash table
 * Return: the index at which the key should be stores
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
