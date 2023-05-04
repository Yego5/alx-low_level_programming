#include "main.h"

/**
 * get_bit - returns value of the bit at an index in the decimal number
 *
 * @n: number to be search
 * @index: index of a bit
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bt_vl;

	if (index > 63)
		return (-1);

	bt_vl = (n >> index) & 1;

	return (bt_vl);
}
