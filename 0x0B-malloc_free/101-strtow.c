#include "main.h"

/**
 * word_len - locates the index
 * @str: the string to be searched
 * Return: the index marking
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}
/**
 * count_word - help fnction to count
 * @str: string to evaluate
 * Return: to return no of words
 */
int count_word(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
	return (words);
}
/**
 * strtow - splits a string
 * @str: string to split
 * Return: Pointer to an array of string
 */
char **strtow(char *str)
{
	char **matrix;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);
				matrix[w] = malloc(sizeof(char) * (letters + 1));

				if (matrix[w] == NULL)
				{
					for (; w >= 0; w--)
						free(matrix[w]);

					free(matrix);
					return (NULL);
				}
				for (l = 0; l < letters; l++)
					matrix[w][l] = str[index++];
				matrix[w][l] = '\0';
	}
	matrix[w] = NULL;
	return (matrix);
}
