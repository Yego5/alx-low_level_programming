#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @hed: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *hed)
{
	int cnt;

	cnt = 0;

	if (hed == NULL)
		return (cnt);

	while (hed->prev != NULL)
		hed = hed->prev;

	while (hed != NULL)
	{
		printf("%d\n", hed->n);
		cnt++;
		hed = hed->next;
	}

	return (cnt);
}
