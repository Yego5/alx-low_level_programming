#include "hash_tables.h"

/**
 * calculate_hash_djb2 - Hash function implementing the djb2 algorithm.
 * @strg: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int calculate_hash_djb2(const unsigned char *strg)
{
    unsigned long int hash_v;
    int chctr;

    hash_v = 5381;
    while ((chctr = *strg++))
        hash_v = ((hash_v << 5) + hash_v) + chctr; /* hash * 33 + c */

    return (hash_v);
}
