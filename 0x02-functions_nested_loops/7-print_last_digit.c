#include "main.h"
/**
 *print_last_digit - to create the function
 *@k: to create the variable
 *Return: value to return
 */
int print_last_digit(int k)
{
	int a;

	a = k % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
