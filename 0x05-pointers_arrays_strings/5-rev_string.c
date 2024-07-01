#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
int i;
int j;
char rev;
for (i = 0; s[i] != '\0'; i++)
{
};
for (j = i - 1; j >= i / 2; j--)
{
rev = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = rev;
}
}
