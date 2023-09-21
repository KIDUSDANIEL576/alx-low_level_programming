#include "lists.h"

/**
* head: first node
* sum_listint - listint_t list
* Return: resulting sum
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

