#include "main.h"
/**
 * _puts - the function to print the string
 * @str: the variable to print
 * Return: to return 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
