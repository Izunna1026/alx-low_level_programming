#include "main.h"
/**
 *jack_bauer - calling on the functiom jack
 *
 * Return: To return 0
 */
void jack_bauer(void)
{
	int k, l;

	for (k = 0; k < 24; k++)
	{
		for (l = 0; l < 60; l++)
		{
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
			_putchar(':');
			_putchar(l / 10 + '0');
			_putchar(l % 10 + '0');
			_putchar('\n');
		}
	}
}
