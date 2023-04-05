#include "main.h"

int prime_number(int n, int i);
/**
* is_prime_number - function that checks if input integer is prime
* @n: number to be checked
* Return: returns 1 if the input integer is prime, if not,
* return 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_number(n, n - 1));
}

/**
* prime_number - function that checks if a number is prime using recursion
* @n: number to be checked
* @i: variable used to iterate
* Return: returns 1 if the number is prime, return 0 if not
*/
int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}

	return (prime_number(n, i - 1));
}
