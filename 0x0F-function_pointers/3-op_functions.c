#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function to add
 * @a: first variable
 * @b: second variable
 * Return: to return 0
 */
int op_add(int a, int b)
{
		return (a + b);
}

/**
 * op_sub - funtion to subtract
 * @a: first variable
 * @b: second variable
 * Return: to return 0
 */
int op_sub(int a, int b)
{
		return (a - b);
}

/**
 * op_mul - funtion to multiply
 * @a: first variable
 * @b: second variable
 * Return: to return 0
 */
int op_mul(int a, int b)
{
		return (a * b);
}

/**
 * op_div - to divide
 * @a: first variable
 * @b: second var
 * Return: to return 0
 */
int op_div(int a, int b)
{
		if (b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		return (a / b);
}

/**
 * op_mod - operation modulus
 * @a: first varible
 * @b: second variable
 * Return: to return 0
 */
int op_mod(int a, int b)
{
		if (b == 0)
		{
			printf("Error\n");
			exit(100);
		}

		return (a % b);
}
