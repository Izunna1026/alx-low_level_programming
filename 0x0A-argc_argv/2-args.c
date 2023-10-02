#include <stdio.h>
/**
 * main - to print the argument
 * @argc: argument counter
 * @argv: argument vector
 * Return: to return 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
