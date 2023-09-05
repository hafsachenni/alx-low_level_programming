#include "main.h"

/**
 * error_file - checks if file can be opened
 * @file_from: file_from
 * @file_to: file_to
 * argv: arg vector
 * Return: none
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR~_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check code for holberton school students
 * @argc: num of args
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize-t nchars, nwr;
	char buf[1024];

