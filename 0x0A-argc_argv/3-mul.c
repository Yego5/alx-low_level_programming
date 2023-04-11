#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int r, c, n, len, f, digit;

	r = 0;
	c = 0;
	n = 0;
	len = 0;
	x = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (r < len && x == 0)
	{
		if (s[r] == '-')
			++c;

		if (s[r] >= '0' && s[r] <= '9')
		{
			digit = s[r] - '0';
			if (c % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[r + 1] < '0' || s[r + 1] > '9')
				break;
			f = 0;
		}
		r++;
	}

	if (x == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
