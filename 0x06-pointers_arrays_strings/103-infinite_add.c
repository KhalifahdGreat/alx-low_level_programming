#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers.
 * @n1: The first number to be added.
 * @n2: The second number to be added.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int index, index2, index3, l, digit, num;
for (index = 0; n1[index]; index++)
;
for (index2 = 0; n2[index2]; index2++)
;
if (index > size_r || index2 > size_r)
return (0);
digit = 0;
for (index -= 1, index2 -= 1, index3 = 0; index3 < size_r - 1;
index--, index2--, index3++)
{
num = digit;
if (index >= 0)
num += n1[index] - '0';
if (index2 >= 0)
num += n2[index2] - '0';
if (index < 0 && index2 < 0 && num == 0)
{
break;
}
digit = num / 10;
r[index3] = num % 10 + '0';
}
r[index3] = '\0';
if (index >= 0 || index2 >= 0 || digit)
return (0);
for (index3 -= 1, l = 0; l < index3; index3--, l++)
{
digit = r[index3];
r[index3] = r[l];
r[l] = digit;
}
return (r);
}
