#include "hash_tables.h"

void hash_table_print(const hash_table_t *hash_t)
{
    hash_node_t *nd;
    unsigned long int indx;
    unsigned char comma_flag = 0;

    if (hash_t == NULL)
        return;

    printf("{");
    for (indx = 0; indx < hash_t->size; indx++)
    {
        if (hash_t->array[indx] != NULL)
        {
            if (comma_flag == 1)
                printf(", ");

            nd = hash_t->array[indx];
            while (nd != NULL)
            {
                printf("'%s': '%s'", nd->key, nd->value);
                nd = nd->next;
                if (nd != NULL)
                    printf(", ");
            }
            comma_flag = 1;
        }
    }
    printf("}\n");
}
