#include "main.h"

/**
 * flip_bits -  counts the number of bits to be changed
 * to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of the bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k,  count  = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
		Count++;
	}

	return (count);
}
