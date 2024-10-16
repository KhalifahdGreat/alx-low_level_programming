#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
int *memory;
int i, j = 0;
int range;
if (min > max)
return (NULL);
range = max - min;
memory = malloc(sizeof(*memory) * (range + 1));
if (memory != NULL)
{
for (i = min; i <= max; i++)
{
memory[j] = i;
j++;
}
return (memory);
}
else
return (NULL);
}
