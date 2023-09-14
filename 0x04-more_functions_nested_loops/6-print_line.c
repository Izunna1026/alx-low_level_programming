#include "main.h"
/**
 *print_line - to print exact line
 *@n: the variable to check
 * Return: to original
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
