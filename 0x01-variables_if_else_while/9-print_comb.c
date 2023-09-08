#include <stdio.h>

/**
 * main - starting point
 *
 * Return: always 0
 */
int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		if (k == 9)
			putchar(k  + '0');
		else
		{
			putchar(k + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
