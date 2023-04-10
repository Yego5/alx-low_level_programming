#include "main.h"
/**
 * _strpbrk - Entry point
 * @m: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *m, char *accept)
{
	int i;

	while (*m)
	{
		for (i = 0; accept[i]; k++)
		{
		if (*m == accept[i])
		return (m);
		}
	m++;
	}

return ('\0');
}
