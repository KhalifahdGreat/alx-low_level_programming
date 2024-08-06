#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - Prints all the elements of a list.
 * @h: pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;
for (; h != NULL; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
