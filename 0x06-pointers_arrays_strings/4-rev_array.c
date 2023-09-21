#include "main.h"
#include <stdio.h>
/**
 * reverse_array - function to reverse the arrays
 * @a: the variable a
 * @n: the variable n
 * Return: to return 0
 */
void reverse_array(int *a, int n)
{
	int i, k;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n] = k;
		n--;
	}
}
