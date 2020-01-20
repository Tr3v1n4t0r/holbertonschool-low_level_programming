#include "hash_tables.h"

/**
 *hash_djb2 - Hash function using djb2 algorithm
 *
 *@str: Hash value
 *
 *Return: Hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int a;

	while((a = *str++))
		hash = ((hash << 5) + hash) + a;

	return (hash);
}
