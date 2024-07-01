#include "main.h"
/**
  * print_rev - a function that prints a string, in reverse
  * @s: input string
  * Return: no return
 */
void print_rev(char *s)
{
int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{
};
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
