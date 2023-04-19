#include "function_pointers.h"

#include <stdio.h>

/**
 * print_name -  using pointer to function print the name
 *
 *@f: pointer to function
 *@name: string to add
 * Return: always return zero
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
