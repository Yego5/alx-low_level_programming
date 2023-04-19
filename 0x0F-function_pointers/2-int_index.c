#include "function_pointers.h"

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elems in array
 * @cmp: pointer to func of one of 3 in main
 *
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))

{
	Int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
