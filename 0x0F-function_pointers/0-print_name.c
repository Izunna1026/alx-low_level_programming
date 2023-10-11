#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function name
 * @name: variable to print
 * @f: the variable f
 * Return: to return 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
