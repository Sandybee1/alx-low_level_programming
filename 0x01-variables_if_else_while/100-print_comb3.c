#include <stdio.h>
/**
  * main - Entry point
  * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n <= 8; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			putchar(n + '0');
			putchar(m + '0');
			if (n != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
