#include <stdio.h>
/**
 * main - the main function
 *
 * Return: always 0
 */


int main(void)
{
	unsigned long int k = 1;
	unsigned long int l = 2;
	unsigned long int m;
	int n;

	printf("%lu, ", k);
	for (n = 1; n < 50; n++)
	{
		printf("%lu", l);
		m = k + l;
		k = l;
		l = m;
		if (n != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
