#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @a: starting address of memory to be filled
 * @b: the desired value
 * @c: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *a, char b, unsigned int c)
{
	int x = 0;

	for (; c > 0; x++)
	{
		a[x] = b;
		c--;
	}
	return (a);
}
