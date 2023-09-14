#include <stdio.h>
#include <math.h>
/**
 * main - to start the program
 *
 * Return: to return 0;
 */
int main(void)
{
	long i, k;
	long num = 612852475143;
	double squr = sqrt(num);

	for (i = 1; i <= squr; i++)
	{
		if (num % i == 0)
		{
			k = num / i;
		}
	}
	printf("%ld\n", k);
	return (0);
}
