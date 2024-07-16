#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid -  a function that returns a pointer
 *to a 2 dimensional array of integers.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
int **iarray;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
iarray = (int **)malloc(sizeof(int *) * height);
if (iarray == NULL)
{
free(iarray);
return (NULL);
}
for (i = 0; i < height; i++)
{
iarray[i] = (int *)malloc(sizeof(int) * width);
if (iarray[i] == NULL)
{
for (i--; i >= 0; i--)
{
free(iarray[i]);
}
free(iarray);
return (NULL);
}
for (j = 0; j < width; j++)
{
iarray[i][j] = 0;
}
}
return (iarray);
}
