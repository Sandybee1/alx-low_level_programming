#include "main.h"

/**
  * _strcat - appends the src string to the dest string,
  *           overwriting the terminating null byte (\0) at the end of dest,
  *           and then adds a terminating null byte
  * @src: input value
  * @dest: input value
  *
  * Return: always 0
  */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
