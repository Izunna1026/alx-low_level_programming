#include "main.h"
#include <stdio.h>
/**
 * print_array - the function of arrays to print
 * @a: the point variables
 * @n: the variable or length of arrays
 * Return: the value to return 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
