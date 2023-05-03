#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: pointer to first node in the list
 *
 * Return: pointer to the first node in new list
 */
listint_t *reverse_listint(listint_t **head)
{
 listint_t *prav = NULL;
 listint_t *next = NULL;

 while (*head)
 {
 next = (*head)->next;
 (*head)->next = prav;
 prav = *head;
 *head = next;
 }

 *head = prav;

 return (*head);
}
