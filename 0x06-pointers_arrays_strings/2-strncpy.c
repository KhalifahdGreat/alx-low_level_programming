#include "main.h"
/**
 * _strncpy - _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest : pointer to char params
 * @src : pointer to char params
 * @n : int params
 * Return: pointer to the resulting string @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
