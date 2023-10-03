#include "main.h"
/**
 * _strdup - the function strdup
 * @str: the variable
 * Return: to return 0
 */
char *_strdup(char *str)
{
	char *cp;
	int count = 0;
	int j;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		count++;
	cp = malloc(sizeof(char) * count + 1);
	if (cp == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		cp[j] = str[j];
	return (cp);
}
