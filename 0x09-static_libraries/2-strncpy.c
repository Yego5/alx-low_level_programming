#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @x: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int x)
{
	int y;

	y = 0;
	while (y < x && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	while (y < x)
	{
		dest[y] = '\0';
		y++;
	}

	return (dest);
}
