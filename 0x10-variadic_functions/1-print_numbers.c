#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - Prints numbers, followed by a newL.
 * @separator: The string to be printed btw numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nams

	unsigned int index;


	va_start(nams, n);


	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nams, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nams);
}
