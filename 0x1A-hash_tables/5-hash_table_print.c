#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function to print the key:value from htt
 * @htt: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *htt)
{
	unsigned long int i = 0;
	hash_node_t *bucket;
	int not_fin = 0;

	if (!htt)
		return;

	printf("{");
	for (i = 0; i < htt->size; i++)
	{
		bucket = htt->array[i];
		while (bucket)
		{
			if (not_fin)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			not_fin = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}

