#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char i = 'a';
char j = '0';
while (j <= '9')
{
putchar(j);
j++;
}
while (i <= 'f')
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
