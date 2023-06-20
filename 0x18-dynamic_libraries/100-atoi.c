#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *str)
{
	int indx, sgn, nmb, lnt, fd, digit;

	indx = 0;
	sgn = 0;
	nmb = 0;
	lnt = 0;
	fd = 0;
	digit = 0;

	while (str[lnt] != '\0')
		lnt++;

	while (indx < lnt && sgn == 0)
	{
		if (str[indx] == '-')
			++sgn;

		if (str[indx] >= '0' && str[indx] <= '9')
		{
			digit = str[indx] - '0';
			if (sgn % 2)
				digit = -digit;
			nmb = nmb * 10 + digit;
			sgn = 1;
			if (str[indx + 1] < '0' || str[indx + 1] > '9')
				break;
			sgn = 0;
		}
		indx++;
	}

	if (sgn == 0)
		return 0;

	return nmb;
}
