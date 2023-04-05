#include "main.h"

/**
* _puts_recursion - this function that  prints a string, and then followed by  new line
* @s: string will be printed
* Return: always ziro
*/
void _puts_recursion(char *s);
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion((s + 1));
}
