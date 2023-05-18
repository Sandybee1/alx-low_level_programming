#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: first integer number
 * @max: last integer number
 * Return: pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int me, you;
	int *sandy;

	if (min > max)
		return (NULL);
	you = max - min + 1;
	sandy = malloc(sizeof(int) * you);
	if (sandy == NULL)
		return (NULL);
	for (me = 0; me < you; me++, min++)
	{
		sandy[me] = min;
	}
	return (sandy);
}
