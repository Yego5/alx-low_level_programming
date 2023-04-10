#include "main.h"
/**
 * _strcmp - compare string values
 * @n1: input value
 * @n2: input value
 *
 * Return: n1[x] - n2[x]
 */
int _strcmp(char *n1, char *n2)
{
	int x;

	x = 0;
	while (n1[x] != '\0' && n2[x] != '\0')
	{
		if (n1[x] != n2[x])
		{
			return (n1[x] - n2[x]);
		}
	x++;
	}
	return (0);
}
