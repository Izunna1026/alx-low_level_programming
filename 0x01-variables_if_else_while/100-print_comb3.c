#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int k;
	int l;

	for (k = 0; k < 10; k++)
	{
		for (l = k + 1; l < 10; l++)
		{
			/* print the two digit in ascending order */
			putchar('0' + k);
			putchar('0' + l);

			if (k != 8 || l != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
