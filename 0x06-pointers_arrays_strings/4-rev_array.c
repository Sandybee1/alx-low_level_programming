#include "main.h"

/**
  * reverse_array -  reverses the content of an array of integers.
  * @a: array
  * @n: number of array elements
  *
  * Return: void
  */
void reverse_array(int *a, int n)
{
	 int c, e;

	for (c = 0; c < n / 2; c++)
	{
		e = a[c];
		a[c] = a[n - 1 - c];
		a[n - 1 - c] = e;
	}
}
