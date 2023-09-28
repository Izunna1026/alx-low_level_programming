#include "main.h"
/**
 *_strlen_recursion - the function the recur
 *@s: the variable pointer
 *Return: to return the value
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
