#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *last;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = NULL;
if (*head == NULL)
{
*head = temp;
}
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = temp;
}
return (*head);
}
