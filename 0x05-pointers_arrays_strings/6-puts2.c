#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 *starting with the first character
 * @str: type
 *
 */
void puts2(char *str)
{
int i;
int j;
for (i = 0; str[i] != '\0'; i++)
{
};
for (j = 0; j < i; j += 2)
{
_putchar(str[j]);
}
_putchar('\n');
}
