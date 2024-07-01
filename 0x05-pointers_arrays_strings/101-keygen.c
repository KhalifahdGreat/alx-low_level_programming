#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a valid password for the 101-crackme program
 *
 * Return: Always 0
 */
int main(void)
{
    int sum = 0;
    char password[100];
    int i = 0;
    char c;

    srand(time(NULL));

    while (sum < 2772 - 126) // 126 is the highest ASCII value that can be used to avoid exceeding the sum
    {
        c = rand() % 94 + 33; // Generate a random character from '!' to '~'
        sum += c;
        password[i++] = c;
    }
    password[i++] = 2772 - sum; // Add the final character to reach exactly 2772
    password[i] = '\0'; // Null-terminate the string

    printf("%s", password);

    return (0);
}

