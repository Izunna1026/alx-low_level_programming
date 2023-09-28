#include "main.h"
/**
 * _sqrt_recursion - to find the sqrt root
 * @n: the variable n
 * Return: the value to return
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - the actual square root
 * @n: the same variable to return
 * @i: the second variable
 * Return: to return variable
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
