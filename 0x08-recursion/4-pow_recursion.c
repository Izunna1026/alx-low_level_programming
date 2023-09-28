#include "main.h"
/**
 * _pow_recursion - to the power of y
 * @x: the first variable to power to y
 * @y: the root
 * Return: to return 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
