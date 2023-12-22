#include "hash_tables.h"

/**
 * hash_djb2 - this is Hash function implementing the djb2 algorithm
 * @str: this is the string to hash
 * Return: the calculated hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int zebra;

	hash = 5381;
	while ((zebra = *str++))
		hash = ((hash << 5) + hash) + zebra; /* hash * 33 + zebra */

	return (hash);
}
