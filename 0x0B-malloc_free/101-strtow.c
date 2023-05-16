#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int y, t, u;

	y = 0;
	u = 0;

	for (t = 0; s[t] != '\0'; t++)
	{
		if (s[t] == ' ')
			y = 0;
		else if (y == 0)
		{
			y = 1;
			u++;
		}
	}

	return (u);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int f, e = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (f = 0; f <= len; f++)
	{
		if (str[f] == ' ' || str[f] == '\0')
		{
			if (c)
			{
				end = f;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[e] = tmp - c;
				e++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = f;
	}

	matrix[e] = NULL;

	return (matrix);
}
