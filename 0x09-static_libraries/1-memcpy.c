#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@z: number of bytes
 *
 *Return: copied memory with z byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int z)
{
	int y = 0;
	int k = z;

	for (; y < k; y++)
	{
		dest[y] = src[y];
		z--;
	}
	return (dest);
}
