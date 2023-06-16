#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @hed: head of the list
 * @idx: index of the new node
 * @val: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **hed, unsigned int idx, int val)
{
    dlistint_t *nd;
    dlistint_t *head;
    unsigned int i;

    nd = NULL;
    if (idx == 0)
        nd = add_dnodeint(hed, val);
    else
    {
        head = *hed;
        i = 1;
        if (head != NULL)
            while (head->prev != NULL)
                head = head->prev;
        while (head != NULL)
        {
            if (i == idx)
            {
                if (head->next == NULL)
                    nd = add_dnodeint_end(hed, val);
                else
                {
                    nd = malloc(sizeof(dlistint_t));
                    if (nd != NULL)
                    {
                        nd->n = val;
                        nd->next = head->next;
                        nd->prev = head;
                        head->next->prev = nd;
                        head->next = nd;
                    }
                }
                break;
            }
            head = head->next;
            i++;
        }
    }

    return (nd);
}
