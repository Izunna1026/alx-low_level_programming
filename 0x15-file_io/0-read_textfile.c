#include "main.h"
/**
 * read_textfile - to read a txt file
 * @filename: the name of the file
 * @letters: the number of letters
 * Return: to return the number of letters written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t k, i;
	char *size;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	size = malloc(sizeof(char) * letters);
	if (size == NULL)
		return (0);
	k = read(fd, size, letters);
	i = write(STDOUT_FILENO, size, k);
	close(fd);
	free(size);
	return (i);
}
