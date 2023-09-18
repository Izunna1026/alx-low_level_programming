#include "main.h"
/**
 * _atoi - the function to work on
 * @s: the variable to point to
 * Return: to return the result
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int k = 0;
	int mini = 1;
	int z = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			mini *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			z = 1;
			k = (k * 10) + (s[c] - '0');
			c++;
		}
		if (z == 1)
		{
			break;
		}
		c++;
	}
	k *= mini;
	return (k);
}
