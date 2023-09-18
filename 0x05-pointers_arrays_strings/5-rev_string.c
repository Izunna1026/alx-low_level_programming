#include "main.h"
/**
 * rev_string - the function to reverse the string
 * @s: the charater to be evaluated
 * Return: to return 0
 */
void rev_string(char *s)
{
	int i;
	char k;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	for (i = 0; i < j / 2; i++)
	{
		k = s[i];
		s[i] = s[j - 1 - i];
		s[j - 1 - i] = k;
	}
}
