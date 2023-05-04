#include "main.h"

/**
  * _strcmp - compares two strings.
  * @s1: input value
  * @s2: input value
  *
  * Return: always 0
  */
int _strcmp(char *s1, char *s2)
{
	int k = 0;

	while (s1[k] == s2[k])
	{
		if (s1[k] == '\0')
			return (0);
		k++;
	}

	return (s1[k] - s2[k]);
}
