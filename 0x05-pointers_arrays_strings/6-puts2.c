#include "main.h"
/**
 * puts2 - the function to put
 * @str: the variable to work on
 * Return: to return 0
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	for (i = 0; str[i] != '\0'; i++)
		j++;
	for (i = 0; i <= j; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
