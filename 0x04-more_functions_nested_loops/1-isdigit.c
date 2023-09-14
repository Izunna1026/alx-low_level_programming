#include "main.h"

/**
 * _isdigit - calling the function is digit
 * @c: the variables to be used
 * Return: to return the character
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
