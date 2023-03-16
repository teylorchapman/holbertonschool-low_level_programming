#include "lists.h"

/**
* pop_listint - deletes the head node of a list
* @head: head of the list
* Return: the deleted node data
*/

int pop_listint(listint_t **head)
{
listint_t *popped;
int content;

if (!(*head))
{
return (0);
}
popped = *head;
content = (*head)->n;
*head = (*head)->next;
free(popped);
return (content);
}
