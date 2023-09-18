#include "main.h"
/**
 * swap_int - the function to swap
 * @a: the first pointer
 * @b: the second pointer
 * Return: to return 0
 */
void swap_int(int *a, int *b)
{
	int k = *a;
	*a = *b;
	*b = k;
}
