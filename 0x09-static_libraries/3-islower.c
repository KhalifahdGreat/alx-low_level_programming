#include "main.h"
/**
  * _islower - Checks if a character is lowercase.
 *
 * @c: The character to be inputed and checked.
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
return (1);
else
return (0);
}
