#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @k: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **k, const int n)
{
    dlistint_t *new;
    dlistint_t *k;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->prev = NULL;
    k = *k;

    if (k != NULL)
    {
        while (k->prev != NULL)
            k = k->prev;
    }

    new->next = k;

    if (k != NULL)
        k->prev = new;

    *k = new;

    return (new);
}
