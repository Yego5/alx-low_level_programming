#include "lists.h"

/**
 * listint_len - returns the number of elements in linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: returns the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nam = 0;

	while (h)
	{
		nam++;
		h = h->next;
	}

	return (nam);
}
