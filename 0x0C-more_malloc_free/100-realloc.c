#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 * Return: pointer to newly allocated memory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	unsigned int i, max = new_size;
	char *oldc = ptr;

	if (ptr == NULL)
	{
		c = malloc(new_size);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	c = malloc(new_size);
	if (c == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		c[i] = oldc[i];
	free(ptr);
	return (c);
}
