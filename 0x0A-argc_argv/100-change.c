#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int a, r, s;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	s = 0;

	if (a < 0)
	{
		printf("0\n");
		return (0);
	}

	for (r = 0; r < 5 && a >= 0; r++)
	{
		while (a >= coins[r])
		{
			s++;
			a -= coins[r];
		}
	}

	printf("%d\n", s);
	return (0);
}
