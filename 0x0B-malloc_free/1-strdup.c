#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: zero
 */
char *_strdup(char *str)
{
	char *y;
	int c, m = 0;

	if (str == NULL)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
		c++;

	y = malloc(sizeof(char) * (c + 1));

	if (y == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		y[m] = str[m];

	return (y);
}
