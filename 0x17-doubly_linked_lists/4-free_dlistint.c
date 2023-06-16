#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @hed: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *hed)
{
	dlistint_t *tmp;

	if (hed != NULL)
		while (hed->prev != NULL)
			hed = hed->prev;

	while ((tmp = hed) != NULL)
	{
		hed = hed->next;
		free(tmp);
	}
}
