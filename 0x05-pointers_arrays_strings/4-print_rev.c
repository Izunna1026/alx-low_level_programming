#include "main.h"
/**
 * print_rev - to print in reverse mode
 * @s: the variable to return
 * Return: the value to return which is 0
 */
void print_rev(char *s)
{
	int i;
	int k = 0;

	for (i = 0; s[i] != '\0'; i++)
		k++;
	for (i = k - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
