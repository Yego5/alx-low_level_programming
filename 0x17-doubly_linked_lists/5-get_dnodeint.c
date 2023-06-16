#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @hed: head of the list
 * @idx: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *hed, unsigned int idx)
{
	unsigned int i;

	if (hed == NULL)
		return (NULL);

	while (hed->prev != NULL)
		hed = hed->prev;

	i = 0;

	while (hed != NULL)
	{
		if (i == idx)
			break;
		hed = hed->next;
		i++;
	}

	return (hed);
}
