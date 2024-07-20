#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: input amount
 * Return: 98 if malloc is NULL or return memory address if malloc is not NULL
 */
void *malloc_checked(unsigned int b)
{
void *memory;
memory = malloc(b);
if (memory == NULL)
exit(98);
return (memory);
}
