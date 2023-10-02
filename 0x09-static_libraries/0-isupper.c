#include "main.h"

/**
 * _isupper - the function to register
 *@c: the variable to return
 *Return: to return c
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
