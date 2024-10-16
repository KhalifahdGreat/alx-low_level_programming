#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */
void print_buffer(char *b, int size)
{
int buff, index1, index2;
if (size <= 0)
{
printf("\n");
return;
}
for (buff = 0; buff < size; buff += 10)
{
index1 = size - buff < 10 ? size - buff : 10;
printf("%08x: ", buff);
for (index2 = 0; index2 < 10; index2++)
{
if (index2 < index1)
printf("%02x", *(b + buff + index2));
else
printf("  ");
if (index2 % 2)
{
printf(" ");
}
}
for (index2 = 0; index2 < index1; index2++)
{
int c = *(b + buff + index2);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
}
}
