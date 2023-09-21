#include "lists.h"

/**
* head: pointer
* pop_listint - linked list
* Return: data
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}

