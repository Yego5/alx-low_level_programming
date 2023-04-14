#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocation of memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

	if (pt == NULL)
		exit(98);

	return (pt);
}
