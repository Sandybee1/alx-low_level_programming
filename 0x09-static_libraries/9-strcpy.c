#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 *           including the terminating null byte (0),
 *           to the buffer pointer to the dest.
 * @dest: char to copy
 * @src: char to check
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
