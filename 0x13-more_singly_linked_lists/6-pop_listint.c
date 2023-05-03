#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: pointer to first element in a linked list
 *
 * Return: data inside elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int nam;

if (!head || !*head)
return (0);

nam = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (nam);
}
