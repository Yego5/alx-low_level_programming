#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @hd: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **hd, const int n)
{
    dlistint_t *new;
    dlistint_t *h;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->prev = NULL;
    h = *hd;

    if (h != NULL)
    {
        while (h->prev != NULL)
            h = h->prev;
    }

    new->next = h;

    if (h != NULL)
        h->prev = new;

    *hd = new;

    return (new);
}
