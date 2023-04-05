#include "main.h"

int sqrt_function(int n, int i);

/**
 * _sqrt_recursion - function that returns square root of a number
 * @n: number to be operated on
 * Return: returns the square root of n as int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_function(n, 0));
}

/**
 * sqrt_function - recurse to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int sqrt_function(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_function(n, i + 1));
}
