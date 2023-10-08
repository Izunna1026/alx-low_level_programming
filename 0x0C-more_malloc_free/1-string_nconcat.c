#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 *string_nconcat - to concat
 *@s1: the first variable
 *@s2: the second variable
 *@n: the unsigned varible
 *Return: to return result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *result;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;
	result = malloc(sizeof(char) * (len1 + n) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= len2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			result[len1 + i] = s2[i];
		result[len1 + i] = '\0';
	}
	else
	{
		for (i = 0; s1[1] != '\0'; i++)
			result[i] = s1[i];
		for (i = 0; i < n; i++)
			result[len1 + i] = s2[i];
		result[len1 + i] = '\0';
	}
	return (result);
}
