#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **n;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	n = malloc(sizeof(int *) * height);

	if (n == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		n[a] = malloc(sizeof(int) * width);

		if (n[a] == NULL)
		{
			for (; a >= 0; a--)
				free(n[a]);

			free(n);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			n[a][b] = 0;
	}

	return (n);
}
