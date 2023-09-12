#include <stdio.h>

/**
 * main - startup function
 *
 * Return: always 0
 */
int main(void)
{
	int total = 4000000;
	int k = 1;
	int l = 2;
	int n;
	int sum = 2;

	while (n <= total)
	{
		n = k + l;
		if (n % 2 == 0)
			sum = sum + n;
		k = l;
		l = n;
	}
	printf("%d\n", sum);
	return (0);
}
