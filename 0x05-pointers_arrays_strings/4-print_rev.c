#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 * @s: string to print
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0;
	int d;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (d = len; d >= 0; d--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
