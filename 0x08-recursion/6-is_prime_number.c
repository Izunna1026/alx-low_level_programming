#include "main.h"
/**
 * is_prime_number - the prime number to recur
 * @n: the vriable to work
 * Return: to return prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
/**
 * prime - the function prime
 * @n: the variable n
 * @i: the variable i
 * Return: to return prime
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
