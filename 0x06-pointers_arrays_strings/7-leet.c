#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
int i;
int j;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; leet[j] != '\0'; j++)
{
if (s[i] == leet[j] || s[i] - 32 == leet[j])
{
s[i] = j + '0';
}
}
}
return (s);
}
