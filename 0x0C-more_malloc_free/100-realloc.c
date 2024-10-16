#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _realloc - reallocates a memory block
* @ptr: pointer to the memory previously allocated with a call to malloc
* @old_size: size of ptr
* @new_size: size of the new memory to be allocated
*
* Return: pointer to the address of the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *dest, *src;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
ptr = malloc(new_size);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
dest = malloc(new_size);
if (dest == NULL)
return (NULL);
src = ptr;
for (i = 0; i < new_size && i < old_size; i++)
dest[i] = src[i];
free(ptr);
return (dest);
}
