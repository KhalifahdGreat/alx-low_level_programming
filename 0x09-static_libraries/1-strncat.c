#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return:  a pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int len;
int i;
len = 0;
for (i = 0; i < 1000; i++)
{
if (dest[i] == '\0')
{
break;
}
len++;
}
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}
