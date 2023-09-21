#include "main.h"
/**
 *string_toupper - function to convert to upper
 *@str: the variable
 *Return: to return the variable str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
