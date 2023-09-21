#include "lists.h"

/**
* head: lst to be freed
* free_listint2 - frees a linke
*/

void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
return;

while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}

*head = NULL;
}

