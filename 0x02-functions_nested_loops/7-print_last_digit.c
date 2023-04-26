#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  *
  * @m: input number as an interger
  *
  * Return: last digit
  */
int print_last_digit(int m)
{
	int ld = m % 10;

	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
