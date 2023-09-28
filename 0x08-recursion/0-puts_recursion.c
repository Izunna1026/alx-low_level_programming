#include "main.h"
/**
 * _puts_recursion - the function to recur
 * @s: the character s to return
 * Return: to return 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
