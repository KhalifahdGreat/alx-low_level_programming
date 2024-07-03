#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
int i, j;
char separators[] = " \t\n,;.!?\"(){}";
for (i = 0; s[i] != '\0'; i++)
{
if (s[0] >= 97 && s[0] <= 122)
s[0] = s[0] - 32;
for (j = 0; separators[j] != '\0'; j++)
{
if (s[i] == separators[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (s);
}
