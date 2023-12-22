#include "hash_tables.h"

/**
 * hash_table_create - a program taht creates a hash table
 * @size: this is d size od the array
 * Return: if an error occurs - NULL
 * Otherwise - a pointer to d new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned int zee;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for (zee = 0; zee < size; zee++)
		ht->array[zee] = NULL;

	return (ht);
}
