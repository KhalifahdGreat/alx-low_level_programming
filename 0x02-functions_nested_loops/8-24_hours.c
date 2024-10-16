#include "main.h"
/**
 * jack_bauer - Prints every B of the day of
 *              Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
int A, B;
for (A = 0; A <= 23; A++)
{
for (B = 0; B <= 59; B++)
{
_putchar((A / 10) + '0');
_putchar((A % 10) + '0');
_putchar(':');
_putchar((B / 10) + '0');
_putchar((B % 10) + '0');
_putchar('\n');
}
}
}
