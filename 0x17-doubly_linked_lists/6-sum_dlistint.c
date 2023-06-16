#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @hed: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *hed)
{
	int total;

	total = 0;

	if (hed != NULL)
	{
		while (hed->prev != NULL)
			hed = hed->prev;

		while (hed != NULL)
		{
			total += hed->n;
			hed = hed->next;
		}
	}

	return (total);
}
