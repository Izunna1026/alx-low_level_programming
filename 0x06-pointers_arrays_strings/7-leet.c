#include "main.h"
/**
 *leet - the function to change values
 * @str: the variable to return
 * Return: to return str
 */
char *leet(char *str)
{
	int k, j;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (k = 0; str[k] != '\0'; k++)
	{
		for (j = 0; x[j] != '\0'; j++)
		{
			if (str[k] == x[j])
				str[k] = y[j];
		}
	}
	return (str);
}
