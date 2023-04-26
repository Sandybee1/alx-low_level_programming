#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * @c: The number must be an integer
 *
 * Return: 1 if number is greater than 0
 * 0 if is zero
 * -1 if is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1)
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else (n > 0)
	{
		_putchar(0);
		return (0);
	}
	_putchar('\n');
}
