#include "main.h"
/**
 * append_text_to_file - to add to a file
 * @filename: the file name
 * @text_content: the content of the file
 * Return: to return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count, k;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (count = 0; text_content[count]; count++)
			;
		k = write(fd, text_content, count);
		if (k == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
