#include <stdio.h>

/**
 * Main -Entry point
 *
 * Return: always 0
 */

int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
		putchar(k + '0');
	putchar('\n');
	return (0);
}
