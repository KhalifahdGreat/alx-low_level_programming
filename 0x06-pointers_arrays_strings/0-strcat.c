#include "main.h"
/**
 * _strcat - Concatenates the string pointed to by @src,
 *including the terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest : pointer to char param
 * @src : pointer to char param
 * Return:  a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
int len1;
int len2;
int i;
for (len1 = 0; dest[len1] != '\0'; len1++)
{
};
for (len2 = 0; src[len2] != '\0'; len2++)
{
};
for (i = 0; i < len2; i++)
{
dest[len1  + i] = src[i];
}
return (dest);
}
