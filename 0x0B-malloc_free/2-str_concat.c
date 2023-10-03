#include "main.h"
/**
 * str_concat - function join two string
 * @s1: the first variable
 * @s2: the second variable
 * Return: to return output
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; j++)
		len1++;
	for (j = 0; s2[j] != '\0'; j++)
		len2++;
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);
	for (j = 0; s1[j] != '\0'; j++)
		result[j] = s1[j];
	for (j = 0; s2[j] != '\0'; j++)
		result[len1 + j] = s2[j];
	return (result);
}
