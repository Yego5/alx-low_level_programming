#include "main.h"
/**
 * _strspn - Entry point
 * @p: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *p, char *accept)
{
	unsigned int x = 0;
	int i;

	while (*p)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*p == accept[i])
			{
				x++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (x);
		}
		p++;
	}
	return (x);
}
