#include "main.h"
/**
 * print_chessboard - the function to print chess
 * @a: the variable array
 * Return: to return 0
 */
void print_chessboard(char (*a)[8])
{
	int k, n;

	for (k = 0; k < 8; k++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[k][n]);
		_putchar('\n');
	}
}
