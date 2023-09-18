#include "main.h"
/**
 * puts2 - the function to put
 * @str: the variable to work on
 * Return: to return 0
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
