#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 */
void print_alphabet_x10(void)
{
int times;
for (times = 0; times < 10; times++)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
}
