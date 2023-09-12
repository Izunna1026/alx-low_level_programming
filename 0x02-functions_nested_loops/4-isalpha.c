#include "main.h"
/**
 * _isalpha - to indicate the alpha
 * @c: the variable to send back
 * Return: the value to return
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
