#include "hash_tables.h"

/**
 * key_index - Returns the index of a key using djb2 algorithm
 * @key: key of the index to be gotten
 * @size: size of the array of the hash table
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
