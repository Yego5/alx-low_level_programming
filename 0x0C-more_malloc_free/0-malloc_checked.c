#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - memory allocation using malloc
 * @b: allocate bytes of number 
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
