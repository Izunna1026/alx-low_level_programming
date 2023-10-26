#include "main.h"
/**
 * to_print_bin - recursively printing binary
 * @n: the variable n
 * Return: to return 0
 */
void to_print_bin(unsigned long int n)
{
	if (n == 0)
		return;
	to_print_bin(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}
/**
 * print_binary - to print binary
 * @n: the variable n
 * Return: to return 0
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		to_print_bin(n);
	}
}
