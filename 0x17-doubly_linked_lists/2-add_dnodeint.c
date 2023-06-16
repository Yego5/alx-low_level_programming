#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_val;
	dlistint_t *tp;

	new_val = malloc(sizeof(dlistint_t));
	if (new_val == NULL)
		return (NULL);

	new_val->n = n;
	new_val->prev = NULL;
	tp = *head;

	if (tp != NULL)
	{
		while (tp->prev != NULL)
			tp = tp->prev;
	}

	new_val->next = tp;

	if (tp != NULL)
		tp->prev = new_val;

	*head = new_val;

	return (new_val);
}
