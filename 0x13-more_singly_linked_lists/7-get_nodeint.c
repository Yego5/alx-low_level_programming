#include "lists.h"

/**
 * get_nodeint_at_index - returns node at certain index in a linked list
 * @head: first node in linked list
 * @index: index of node to return
 *
 * Return: pointer to node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int k = 0;
listint_t *temp = head;

while (temp && k < index)
{
temp = temp->next;
k++;
}

return (temp ? temp : NULL);
}

