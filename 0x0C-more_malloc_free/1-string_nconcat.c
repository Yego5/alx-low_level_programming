#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string in which to append to 
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *n;
	unsigned int x = 0, p = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		n = malloc(sizeof(char) * (len1 + n + 1));
	else
		n = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!n)
		return (NULL);

	while (x < len1)
	{
		n[x] = s1[x];
		x++;
	}

	while (n < len2 && x < (len1 + n))
		n[x++] = s2[p++];

	while (n >= len2 && x < (len1 + len2))
		n[x++] = s2[p++];

	n[x] = '\0';

	return (n);
}
