#include "main.h"
/**
 * factorial - factoring the number
 * @n: variable representing the value
 * Return: to return the factoe
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
