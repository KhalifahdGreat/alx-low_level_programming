#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: lists
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
if (h == NULL)
return (0);
for (; h != NULL; i++)
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nil)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
}
return (i);
}
