#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @hed: head of the list
 * @val: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **hed, const int val)
{
	dlistint_t *h;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = val;
	new_node->next = NULL;

	h = *hed;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new_node;
	}
	else
	{
		*hed = new_node;
	}

	new_node->prev = h;

	return (new_node);
}
