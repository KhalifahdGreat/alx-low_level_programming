#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
size_t i;
list_t *new, *tail;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
if (str == NULL)
{
free(new);
return (NULL);
}
for (i = 0; str[i]; i++)
;
new->str = strdup(str) ? strdup(str) : (NULL);
new->len = i;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
tail = *head;
while (tail->next != NULL)
{
tail = tail->next;
}
tail->next = new;
}
return (new);
}
