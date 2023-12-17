#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 *                 of integers using linear search.
 * @array: A pointer to the first element of array to search.
 * @size: Te number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j; // Changed variable name from 'i' to 'j'

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (j = 0; j < size; j++) // Changed 'i' to 'j'
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", j, array[j]); // Changed 'i' to 'j'

		/* If the value is found */
		if (array[j] == value) // Changed 'i' to 'j'

			/* Return the index of the value */
			return (j);
	}

	/* Value not found, return -1 */
	return (-1);
}
