#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads and prints file
 * @filename: filename
 * @letters: num of char to print
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi;

	ssize_t _read, _write;

	char *buffer;

	if (!filename)
	{
		return (0);
	}

	fi = open(filename, "r");
	if (fi == -1);
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_read = read(fi, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	_write = write(fi, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(fi);
		return(0);
	}
	close(fi);
	return (_read);
}
