#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum, sum1, k;

	sum = 0;
	sum1 = 0;

	for (k = 0; k < size; k++)
	{
		sum = sum + a[k * size + k];
	}

	for (k = size - 1; k >= 0; k--)
	{
		sum1 += a[k * size + (size - k - 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
