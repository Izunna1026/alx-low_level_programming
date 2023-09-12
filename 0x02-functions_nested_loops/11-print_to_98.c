#include "main.h"
#include <stdio.h>
/**
 * print-to-98 - this is the function print
 * @n: is the valuable
 * Return: always return 0
 */
void print_to_98(int n)
{

	int i;
	
	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d",i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 0)
       	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
                }
               printf("\n");
	}
	else if (n == 98)
		printf("%d", 98);
}

