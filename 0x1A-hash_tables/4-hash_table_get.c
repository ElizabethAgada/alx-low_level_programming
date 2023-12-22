#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key
 * in a hash table
 * @ht: the pointer
 * @key: key to get the value
 * Return: Null - if key cant be matched
 * otherwise, the value associated with key in ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nod;
	unsigned long int praise;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	praise = key_index((const unsigned char *)key, ht->size);
	if (praise >= ht->size)
		return (NULL);

	nod = ht->array[praise];
	while (nod && strcmp(nod->key, key) != 0)
		nod = nod->next;

	return ((nod == NULL) ? NULL : nod->value);
}
