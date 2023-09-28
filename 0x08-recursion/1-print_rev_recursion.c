#include "main.h"
/**
 * _print_rev_recursion - the function to recur
 * @s: the variable to return
 *Return: to return s
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
