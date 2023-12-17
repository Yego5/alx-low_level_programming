#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *                 of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 * Otherwise, the index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t j, left, right;
	
	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
		
		/* Calculate the middle index */
		j = left + (right - left) / 2;
		
		/* If the middle element is the value */
		if (array[j] == value)
			/* Return the index */
			return (j);
		
		/* If the middle element is greater than the value */
		if (array[j] > value)
			/* Update the right boundary */
			right = j - 1;
		else
			/* Otherwise, update the left boundary */
			left = j + 1;
	}
	/* Value not found, return -1 */
	return (-1);
}
