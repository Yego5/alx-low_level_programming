#include "hash_tables.h"
/**
 * hash_table_get - function to retrieve value associeted with key
 * @ht: pointer to hash table
 * @key: key to retrive value
 *
 * Return: value or NULL if key does not exit.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx = 0;
	hash_node_t  *bucket;

	if (!ht || !key || !*key)
		return (NULL);

	indx = key_indx((const unsigned char *)key, ht->size);
	bucket = ht->array[indx];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}

