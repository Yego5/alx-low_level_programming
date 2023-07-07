#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @hsh: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *hsh, const char *key, const char *value)
{
    hash_node_t *nw;
    char *value_copy;
    unsigned long int hsh_i, i;

    if (hsh == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    hsh_i = key_index((const unsigned char *)key, hsh->size);
    for (i = hsh_i; hsh->array[i]; i++)
    {
        if (strcmp(hsh->array[i]->key, key) == 0)
        {
            free(hsh->array[i]->value);
            hsh->array[i]->value = value_copy;
            return (1);
        }
    }

    nw = malloc(sizeof(hash_node_t));
    if (nw == NULL)
    {
        free(value_copy);
        return (0);
    }
    nw->key = strdup(key);
    if (nw->key == NULL)
    {
        free(nw);
        return (0);
    }
    nw->value = value_copy;
    nw->next = hsh->array[hsh_i];
    hsh->array[hsh_i] = nw;

    return (1);
}
