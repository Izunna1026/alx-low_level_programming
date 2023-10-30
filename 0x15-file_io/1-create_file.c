#include "main.h"
/**
 * create_file - to create and write data
 * @filename: the filename
 * @text_content: the content of the file
 * Return: to return 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count, k;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (count = 0; text_content[count]; count++)
		;
	k = write(fd, text_content, count);
	if (k == -1)
		return (-1);
	close(fd);
	return (1);
}
