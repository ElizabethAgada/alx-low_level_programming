#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: pointer ro d hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nud;
	unsigned long int mee;
	unsigned char protozoa = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (mee = 0; mee < ht->size; mee++)
	{
		if (ht->array[mee] != NULL)
		{
			if (protozoa == 1)
				printf(", ");

			nud = ht->array[mee];
			while (nud != NULL)
			{
				printf("'%s': '%s'", nud->key, nud->value);
				nud = nud->next;
				if (nud != NULL)
					printf(", ");
			}
			protozoa = 1;
		}
	}
	printf("}\n");
}
