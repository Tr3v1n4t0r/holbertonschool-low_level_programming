#include "hash_tables.h"

/**
 *key_index - Gets the index of a key
 *
 *@key: The key
 *@size: Size of array in the hash table
 *
 *Return: Index where the key/value should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
