#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything.
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return:  anything to be printed
 * If a string argument is NULL, (nil) is printed instead.
 */
void print_all(const char * const format, ...)
{
va_list args;
int n = 0, i = 0;
char *seperator = ", ";
char *str;
va_start(args, format);
while (format && format[i])
i++;
while (format && format[n])
{
if (n  == (i - 1))
{
seperator = "";
}
switch (format[n])
{
case 'c':
printf("%c%s", va_arg(args, int), seperator);
break;
case 'i':
printf("%d%s", va_arg(args, int), seperator);
break;
case 'f':
printf("%f%s", va_arg(args, double), seperator);
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", str, seperator);
break;
}
n++;
}
printf("\n");
va_end(args);
}
