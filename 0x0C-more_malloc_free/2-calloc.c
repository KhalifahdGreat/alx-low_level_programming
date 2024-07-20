#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - a function like calloc() function
 * @nmemb: no of block
 * @size: size of each block
 * Return:  poitner to the address of the memory block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *memory;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
memory = malloc(nmemb * size);
if (memory == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
memory[i] = 0;
return (memory);
}
