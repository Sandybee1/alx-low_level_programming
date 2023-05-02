#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: string
 * Return: Always 0
 */
void rev_string(char *s)
{
	int e = 0, f, g;
	char k;

	while (s[e] != '\0')
	{
		e++;
	}
	g = e - 1;
	for (f = 0; g >= 0 && f < g; g--, f++)
	{
		k = s[f];
		s[f] = s[g];
		s[g] = k;
	}
}
