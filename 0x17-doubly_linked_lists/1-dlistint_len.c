#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @hd: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *hd)
{
    int coun;

    coun = 0;

    if (hd == NULL)
        return coun;

    while (hd->prev != NULL)
        hd = hd->prev;

    while (hd != NULL)
    {
        coun++;
        hd = hd->next;
    }

    return coun;
}
