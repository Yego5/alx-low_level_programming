#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @hd: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *hd)
{
    int coun;
    coun = 0;
    if (hd == NULL)
        return coun;
    while (hd->prev != NULL)
        hd = hd->prev;
    while (hd != NULL)
    {
        printf("%d\n", hd->n);
        coun++;
        hd = hd->next;
    }
    return coun;
}
