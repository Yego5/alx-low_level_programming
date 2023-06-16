#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @hed: head of the list
 * @idx: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **hed, unsigned int idx)
{
    dlistint_t *h1;
    dlistint_t *h2;
    unsigned int i;

    h1 = *hed;

    if (h1 != NULL)
        while (h1->prev != NULL)
            h1 = h1->prev;

    i = 0;

    while (h1 != NULL)
    {
        if (i == idx)
        {
            if (i == 0)
            {
                *hed = h1->next;
                if (*hed != NULL)
                    (*hed)->prev = NULL;
            }
            else
            {
                h2->next = h1->next;

                if (h1->next != NULL)
                    h1->next->prev = h2;
            }

            free(h1);
            return (1);
        }
        h2 = h1;
        h1 = h1->next;
        i++;
    }

    return (-1);
}
