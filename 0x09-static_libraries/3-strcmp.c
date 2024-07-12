#include "main.h"
/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2,will be the negative difference
 *         If str1 == str2, 0.
 *         If str1 > str2,will be the positive difference.
 */
int _strcmp(char *s1, char *s2)
{
int i;
int diff;
for (i = 0; s1[i] == s2[i] && (s1[i] != '\0'  || s2[i] != '\0'); i++)
{
};
diff = s1[i] - s2[i];
return (diff);
}
