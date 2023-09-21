#include "main.h"
/**
 *cap_string - function to cap the string
 *@str: the variable to return
 *Return: to retur str
 */
char *cap_string(char *str)
{
	int k, j;
	char d[] = {44, 59, 46, '!', '?', '"', '(', ')', '{', '}', ' ', '\t', '\n'};

	for (k = 0; str[k] != '\0'; k++)
	{
		if (k == 0 && str[k] >= 'a' && str[k] <= 'z')
			str[k] = str[k] - 32;
		for (j = 0; d[j] != '\0'; j++)
		{
			if (d[j] == str[k] && (str[k + 1] >= 'a' && str[k + 1] <= 'z'))
				str[k + 1] = str[k + 1] - 32;
		}
	}
	return (str);
}
