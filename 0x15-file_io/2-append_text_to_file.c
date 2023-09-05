#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: filename
 * @text_content: content
 * Return: 1 on succeed -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, 0_WRONLY | 0_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL && write(fd, text_content,
	strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
