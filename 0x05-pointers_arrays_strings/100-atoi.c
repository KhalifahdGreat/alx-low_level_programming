#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
int i;
int var = 0;
int var2 = -1;
int var3 = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == '-')
var2 = var2 * -1;
if (s[i] >= '0' && s[i] <= '9')
{
var = var * 10;
var -= (s[i] - '0');
var3 = 1;
}
else if (var3 == 1)
break;
}
var = var2 *var;
return (var);
}
