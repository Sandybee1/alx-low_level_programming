#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int k, n, z = 0, p = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (k = 0; k < ac; k++)
	{
		for (n = 0; av[k][n]; n++)
			p++;
	}
	p += ac;

	str = malloc(sizeof(char) * p + 1);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
	for (n = 0; av[k][n]; n++)
	{
		str[z] = av[k][n];
		z++;
	}
	if (str[z] == '\0')
	{
		str[z++] = '\n';
	}
	}
	return (str);
}
