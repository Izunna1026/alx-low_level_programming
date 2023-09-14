#include "main.h"
/**
 *print_numbers - to print from 0 to 1
 *
 *Return: the value to return
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
