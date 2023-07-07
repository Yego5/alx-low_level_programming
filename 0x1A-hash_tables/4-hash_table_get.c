#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key in a hash table.
 * @hash_t: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with the key in the hash table.
 */
char *hash_table_get(const hash_table_t *hash_t, const char *key)
{
    hash_node_t *nd;
    unsigned long int indx;

    if (hash_t == NULL || key == NULL || *key == '\0')
        return (NULL);

    indx = key_index((const unsigned char *)key, hash_t->size);
    if (indx >= hash_t->size)
        return (NULL);

    nd = hash_t->array[indx];
    while (nd && strcmp(nd->key, key) != 0)
        nd = nd->next;

    return ((nd == NULL) ? NULL : nd->value);
}
