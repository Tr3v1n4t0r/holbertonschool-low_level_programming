#include "hash_tables.h"

/**
 *hash_table_get - Retrieves a value associated with a key
 *
 *@ht: The hash table
 *@key: The key
 *
 *Return: The value associated with the key, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const cahr *key)
{
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
