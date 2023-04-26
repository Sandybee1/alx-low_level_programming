#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  *
  * @b: input number as an integer
  *
  * Return: absolute value
  */
int _abs(int b)
{
	if (b >= 0)
	{
		return (b);
	}
	else
	{
		return (-b);
	}
	return (0);
}
