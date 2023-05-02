#include "lists.h"

/**
 * print_listint - prints all elements of linked list
 * @h: linked list of type listint_t to print
 *
 * Return:to return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nam = 0;

	while (h)
	{
		printf("%d\n", h->n);
			h = h->next;
			nam++;
	}

	return (nam);
}

