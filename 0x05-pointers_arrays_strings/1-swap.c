#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: input to swap
 * @b: input to swap
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int o = *a;
	*a = *b;
	*b = o;
}
