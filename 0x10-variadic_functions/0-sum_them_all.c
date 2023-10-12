#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - funtion to sum.
 * @n: the n byte
 * Return: to return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int k = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);
		while (k < n)
		{
			sum += va_arg(args, int);
			k++;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
