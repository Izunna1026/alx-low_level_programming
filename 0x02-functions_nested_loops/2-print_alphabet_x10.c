#include "main.h"

/**
 *print_alphabet_x10 - print the alphabet
 *
 *Return: to return a function
 */

void print_alphabet_x10(void)
{
	char i;
	int k;

	for (k = 1; k <= 10; k++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	_putchar('\n');
	}
}
