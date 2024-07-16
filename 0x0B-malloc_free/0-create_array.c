#include <stdlib.h>
#include "main.h"
/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array to be created
 * @c: initialized char of the arrqy
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
array = malloc(sizeof(char) * size);
if (size == 0 || array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
