#include "main.h"
/**
 * wildcmp - the function to call
 * @s1: the first variable
 * @s2: the second variable
 * Return: the return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
	return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
