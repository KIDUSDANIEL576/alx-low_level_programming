#include "lists.h"

/**
* head: list
* free_listint - list
*/

void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head->next;
free(head);
head = temp;
}
}

