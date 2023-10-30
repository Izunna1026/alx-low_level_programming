#include "main.h"
/**
 * printing_error - to print the error message
 * @file_a: the file to copy from
 * @file_b: the file to copy to
 * @argv: argument vector
 * Return: to return 0
 */
void printing_error(int file_a, int file_b, char *argv[])
{
	if (file_a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: to return 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, c;
	ssize_t k, l;
	char size[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	printing_error(file_from, file_to, argv);
	k = 1024;
	while (k == 1024)
	{
		k = read(file_from, size, 1024);
		if (k == -1)
			printing_error(-1, 0, argv);
		l = write(file_to, size, k);
		if (l == -1)
			printing_error(0, -1, argv);
	}
	c = close(file_from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	c = close(file_to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
