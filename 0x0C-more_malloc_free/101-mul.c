#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_digit(char *s)
{
    while (*s)
    {
        if (!isdigit(*s))
            return (0);
        s++;
    }
    return (1);
}

void multiply(char *num1, char *num2)
{
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int len_result = len1 + len2;
    int *result = calloc(len_result, sizeof(int));
    int i, j;

    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];

            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    i = 0;
    while (i < len_result && result[i] == 0)
        i++;

    if (i == len_result)
        printf("0");
    else
    {
        for (; i < len_result; i++)
            printf("%d", result[i]);
    }
    printf("\n");
    free(result);
}

int main(int argc, char *argv[])
{
    if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    multiply(argv[1], argv[2]);
    return (0);
}

