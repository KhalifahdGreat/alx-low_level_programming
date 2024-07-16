#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Helper function to count the number of words in a string.
 * @str: The input string.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
    int count = 0, in_word = 0;

    while (*str)
    {
        if (*str == ' ')
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        str++;
    }
    return (count);
}

/**
 * allocate_word - Allocates memory for a word and copies it.
 * @str: The input string.
 * @start: Starting index of the word.
 * @end: Ending index of the word.
 *
 * Return: Pointer to the allocated word.
 */
char *allocate_word(char *str, int start, int end)
{
    char *word;
    int i;

    word = malloc((end - start + 1) * sizeof(char));
    if (word == NULL)
        return (NULL);

    for (i = 0; start < end; start++, i++)
        word[i] = str[start];
    word[i] = '\0';

    return (word);
}

/**
 * split_into_words - Splits a string into words and allocates memory for them.
 * @str: The input string.
 * @word_count: Number of words.
 *
 * Return: Pointer to an array of strings (words).
 */
char **split_into_words(char *str, int word_count)
{
    char **words;
    int i, j, start, in_word, k;

    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    for (i = 0, j = 0, start = 0, in_word = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            if (in_word)
            {
                words[j] = allocate_word(str, start, i);
                if (words[j++] == NULL)
                {
                    for (k = 0; k < j - 1; k++)
                        free(words[k]);
                    free(words);
                    return (NULL);
                }
                in_word = 0;
            }
        }
        else if (!in_word)
        {
            start = i;
            in_word = 1;
        }
    }

    if (in_word)
    {
        words[j] = allocate_word(str, start, i);
        if (words[j++] == NULL)
        {
            for (k = 0; k < j - 1; k++)
                free(words[k]);
            free(words);
            return (NULL);
        }
    }
    words[j] = NULL;

    return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    int word_count;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);
    if (word_count == 0)
        return (NULL);

    return (split_into_words(str, word_count));
}

