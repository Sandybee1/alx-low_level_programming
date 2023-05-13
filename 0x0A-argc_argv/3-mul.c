#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, d, n, me, k, z;

	a = 0;
	d = 0;
	n = 0;
	me = 0;
	k = 0;
	z = 0;

	while (s[me] != '\0')
		me++;

	while (a < me && k == 0)
	{
		if (s[a] == '-')
			++d;

		if (s[a] >= '0' && s[a] <= '9')
		{
			z = s[a] - '0';
			if (d % 2)
				z = -z;
			n = n * 10 + z;
			k = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			k = 0;
		}
		a++;
	}

	if (k == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
