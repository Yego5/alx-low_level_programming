#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @p: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *p)
{
	int sign = 1, n = 0;
	unsigned int res = 0;

	while (!(p[n] <= '9' && p[n] >= '0') && p[n] != '\0')
	{
		if (p[n] == '-')
			sign *= -1;
		n++;
	}
	while (p[n] <= '9' && (p[n] >= '0' && p[n] != '\0'))
	{
		res = (res * 10) + (p[n] - '0');
		n++;
	}
	res *= sign;
	return (res);
}
