#include "hash_tables.h"

/**
 * hash_table_delete - this function deletes a hash table
 * @ht: pointer to a hash table/
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *tail = ht;
	hash_node_t *nod, *pimp;
	unsigned long int pee;

	for (pee = 0; pee < ht->size; pee++)
	{
		if (ht->array[pee] != NULL)
		{
			nod = ht->array[pee];
			while (nod != NULL)
			{
			pimp = nod->next;
				free(nod->key);
				free(nod->value);
				free(nod);
				nod = pimp;
			}
		}
	}
	free(tail->array);
	free(tail);
}
