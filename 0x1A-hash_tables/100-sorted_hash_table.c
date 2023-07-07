#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *hash_t, const char *key, const char *value);
char *shash_table_get(const shash_table_t *hash_t, const char *key);
void shash_table_print(const shash_table_t *hash_t);
void shash_table_print_rev(const shash_table_t *hash_t);
void shash_table_delete(shash_table_t *hash_t);

shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *hash_t;
    unsigned long int i;

    hash_t = malloc(sizeof(shash_table_t));
    if (hash_t == NULL)
        return (NULL);

    hash_t->size = size;
    hash_t->array = malloc(sizeof(shash_node_t *) * size);
    if (hash_t->array == NULL)
        return (NULL);
    for (i = 0; i < size; i++)
        hash_t->array[i] = NULL;
    hash_t->shead = NULL;
    hash_t->stail = NULL;

    return (hash_t);
}

int shash_table_set(shash_table_t *hash_t, const char *key, const char *value)
{
    shash_node_t *nw, *tmp;
    char *value_copy;
    unsigned long int indx;

    if (hash_t == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_copy = strdup(value);
    if (value_copy == NULL)
        return (0);

    indx = key_index((const unsigned char *)key, hash_t->size);
    tmp = hash_t->shead;
    while (tmp)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = value_copy;
            return (1);
        }
        tmp = tmp->snext;
    }

    nw = malloc(sizeof(shash_node_t));
    if (nw == NULL)
    {
        free(value_copy);
        return (0);
    }
    nw->key = strdup(key);
    if (nw->key == NULL)
    {
        free(value_copy);
        free(nw);
        return (0);
    }
    nw->value = value_copy;
    nw->next = hash_t->array[indx];
    hash_t->array[indx] = nw;

    if (hash_t->shead == NULL)
    {
        nw->sprev = NULL;
        nw->snext = NULL;
        hash_t->shead = nw;
        hash_t->stail = nw;
    }
    else if (strcmp(hash_t->shead->key, key) > 0)
    {
        nw->sprev = NULL;
        nw->snext = hash_t->shead;
        hash_t->shead->sprev = nw;
        hash_t->shead = nw;
    }
    else
    {
        tmp = hash_t->shead;
        while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
            tmp = tmp->snext;
        nw->sprev = tmp;
        nw->snext = tmp->snext;
        if (tmp->snext == NULL)
            hash_t->stail = nw;
        else
            tmp->snext->sprev = nw;
        tmp->snext = nw;
    }

    return (1);
}

char *shash_table_get(const shash_table_t *hash_t, const char *key)
{
    shash_node_t *nd;
    unsigned long int indx;

    if (hash_t == NULL || key == NULL || *key == '\0')
        return (NULL);

    indx = key_index((const unsigned char *)key, hash_t->size);
    if (indx >= hash_t->size)
        return (NULL);

    nd = hash_t->shead;
    while (nd != NULL && strcmp(nd->key, key) != 0)
        nd = nd->snext;

    return ((nd == NULL) ? NULL : nd->value);
}

void shash_table_print(const shash_table_t *hash_t)
{
    shash_node_t *nd;

    if (hash_t == NULL)
        return;

    nd = hash_t->shead;
    printf("{");
    while (nd != NULL)
    {
        printf("'%s': '%s'", nd->key, nd->value);
        nd = nd->snext;
        if (nd != NULL)
            printf(", ");
    }
    printf("}\n");
}

void shash_table_print_rev(const shash_table_t *hash_t)
{
    shash_node_t *nd;

    if (hash_t == NULL)
        return;

    nd = hash_t->stail;
    printf("{");
    while (nd != NULL)
    {
        printf("'%s': '%s'", nd->key, nd->value);
       node = nd->sprev;
        if (node != NULL)
            printf(", ");
    }
    printf("}\n");
}

void shash_table_delete(shash_table_t *hash_t)
{
    shash_table_t *head = hash_t;
    shash_node_t *nd, *tmp;

    if (hash_t == NULL)
        return;

    nd = hash_t->shead;
    while (nd)
    {
        tmp = nd->snext;
        free(nd->key);
        free(nd->value);
        free(nd);
        nd = tmp;
    }

    free(head->array);
    free(head);
}
