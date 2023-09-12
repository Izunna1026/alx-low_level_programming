#include "main.h"


void times_table(void)
{
	int k, l, m;

	for (k = 0; k < 10; k++)
	{
		for (l = 0; l < 10; l++)
		{
			m = k * l;
			_putchar(m + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
