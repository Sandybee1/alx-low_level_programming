#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 *
 * @g: int to check
 * @h: int to check
 * Return: 0 is success
 */
void print_array(int *g, int h)
{
	int a;

	for (a = 0; a < h; a++)
		if (a != h - 1)
		printf("%d, ", g[a]);
		else
			printf("%d", g[a]);
printf("\n");
}
