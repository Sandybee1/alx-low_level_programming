#include "main.h"

/**
 * print_alphabet - prints the alphabets in lowercase to the console.
 * the console supports ASCII characters.
 */

void print_alphabet(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
