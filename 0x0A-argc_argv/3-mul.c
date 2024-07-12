#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program receives two arguments - 0.
 *         If the program does not receive two arguments - 1.
 */
int main(int argc, char *argv[])
{
int digit1, digit2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
digit1 = atoi(argv[1]);
digit2 = atoi(argv[2]);
result = digit1 *digit2;
printf("%d\n", result);
return (0);
}
