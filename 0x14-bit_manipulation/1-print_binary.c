#include "main.h"

/**
 * print_binary - prints binary that is equivalent to decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, cont = 0;
	unsigned long int current;

	for (k = 63; k >= 0; k--)
	{
		current = n >> k;

		if (current & 1)
		{
			_putchar('1');
			cont++;
		}
		else if (cont)
			_putchar('0');
	}
	if (!cont)
		_putchar('0');
}
