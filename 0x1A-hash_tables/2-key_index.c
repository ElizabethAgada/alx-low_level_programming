#include "hash_tables.h"

/**
 * key_index - getting the index at which a key value
 * pair should be stored in array of a hasg table.
 * @key: this is d key to get the index
 * @size: its the size of the array
 * Description: this uses the djb2 algorithm
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
