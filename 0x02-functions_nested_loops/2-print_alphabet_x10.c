#include "main.h"

/**
 * print_alphabet - prints the alphabet 10 times in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{

	int m;
	int n;

	for (m = 0; m <= 10; m++)
	{
		for (n = 97; n <= 122; n++)
			_putchar(n);
	}
		_putchar('\n');
}
