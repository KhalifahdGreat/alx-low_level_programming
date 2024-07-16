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
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words, *word_start;
	int i, j, k, word_len, word_count;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, j = 0; j < word_count; j++)
	{
		while (str[i] == ' ')
			i++;

		word_start = str + i;
		word_len = 0;
		while (str[i] != ' ' && str[i] != '\0')
		{
			word_len++;
			i++;
		}

		words[j] = malloc((word_len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < word_len; k++)
			words[j][k] = word_start[k];
		words[j][k] = '\0';
	}
	words[j] = NULL;
	return (words);
}

