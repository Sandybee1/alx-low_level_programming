#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	char *letters = "AEOTL";
	char *nums = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] + 32)
			{
				str[i] = nums[j];
			}
		}
	}

	return (str);
}
