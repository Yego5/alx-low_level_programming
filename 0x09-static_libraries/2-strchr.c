#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @k: input
 * @y: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *k, char y)
{
	int x = 0;

	for (; k[x] >= '\0'; x++)
	{
		if (k[x] == y)
			return (&k[x]);
	}
	return (0);
}
