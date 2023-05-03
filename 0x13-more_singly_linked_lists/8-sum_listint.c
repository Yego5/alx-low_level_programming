#include "lists.h"

/**
 * sum_listint - calculates the sum of all data in a listint_t list
 *
 * @head: it’s first node in linked list
 *
 * Return: outcome of sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
