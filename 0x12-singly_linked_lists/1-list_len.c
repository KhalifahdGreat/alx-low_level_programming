#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: list.
 * Return: number of elements in list.
 */
size_t list_len(const list_t *h)
{
size_t i = 0;
if (h == NULL)
return (0);
for (; h != NULL; i++)
{
h = h->next;
}
return (i);
}
