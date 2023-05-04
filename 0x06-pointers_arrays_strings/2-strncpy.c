#include "main.h"

/**
  * _strncat - concatenates two strings.
  * @dest: input value
  * @src: input value
  * @n: input value
  *
  * Return: dent
  */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
