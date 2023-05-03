#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - it counts the number of unique nodes
 * in a looped listint_t linked list.
 *
 * @head: its pointer to the head of the listint_t to check.
 *
 * Return: If list is not looped then return - 0.
 * Else - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *orange, *mango;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

orange = head->next;
mango = (head->next)->next;

while (mango)
{
if (orange == mango)
{
orange = head;
while (orange != mango)
{
nodes++;
orange = orange->next;
mango = mango->next;
}

orange = orange->next;
while (orange != mango)
{
nodes++;
orange = orange->next;
}

return (nodes);
}

orange = orange->next;
mango = (mango->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Prints the listint_t list safely.
 * @head: The pointer to head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, ind = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (ind = 0; ind < nodes; ind++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
