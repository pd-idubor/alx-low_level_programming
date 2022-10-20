#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: index for key/value pair storage
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
