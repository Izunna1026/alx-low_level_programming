#include "main.h"
/**
 *is_palindrome - the function to recur
 *@s: the variable
 *Return: to return 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - the function to find length
 * @s: the variable
 * Return: to return 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check - the function tto check
 * @s: first variable
 * @i: second variable
 * @len: theird variable
 * Return: to return 0
 */
int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
