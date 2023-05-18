#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
  * malloc_checked - allocates memory using malloc.
  * @b: The size of the memory block to allocate.
  *
  * Return: On success, a pointer to the allocated memory.
  *         On failure, the function terminates the process
  *         with a status value of 98.
  */

void *malloc_checked(unsigned int b)
{
	void *me;

	me = malloc(b);

	if (me == NULL)
		exit(98);
	return (me);
}
