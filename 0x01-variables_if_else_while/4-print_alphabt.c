#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lower = 'a';
char q = 'q';
char e = 'e';
while (lower <= 'z')
{
if (lower != e && lower != q)
{
putchar (lower);
}
lower++;
}
putchar('\n');
return (0);
}
