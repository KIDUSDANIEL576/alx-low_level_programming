#include "lists.h"

/**
* h: listint_t
* listint_len - linked lists
* Return: nodes
*/
size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}

return (num);
}

