#include "main.h"
#include <string.h>

/**
* _print_rev_recursion - the function that prints the string in reverse
* @s: a string to be printed
* Return: returns 0
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
