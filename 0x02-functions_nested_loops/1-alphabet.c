#include "main.h"

/**
 * print_alphabet - print alphabets in only lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{

	char j;
	
	for (j = 97; j <= 122; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
