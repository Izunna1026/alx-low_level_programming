#include "main.h"
/**
 * _strcmp - the function to compare
 * @s1: the first variable
 * @s2: the second variable
 * Return: to return 0
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] != '\0' || s2[k] != '\0'; k++)
	{
		if (s1[k] != s2[k])
		{
			if (s1[k] < s2[k])
				return (s1[k] - s2[k]);
			else if (s2[k] < s1[k])
				return (s1[k] - s2[k]);
		}
	}
		return (0);
}
