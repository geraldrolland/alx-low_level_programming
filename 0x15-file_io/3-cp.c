#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void exit_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buf.
 * @file: The name of the file.
 *
 * Return: buf.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = (char *)malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", file);
	exit(99);
	}

	return (buf);
}

/**
 * exit_file - Closes file descriptors.
 * @fd: The file descriptor
 */
void exit_file(int fd)
{
	int fc;

	fc = close(fd);
	if (fc == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, rr, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rr = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	do {
	if (from == -1 || rr == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't read from file %s\n", argv[1]);
	free(buf);
	exit(98);
	}

	wr = write(to, buf, rr);
	if (to == -1 || wr == -1)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", argv[2]);
	free(buf;
	exit(99);
	}
	rr = read(from, buffer, 1024);
	to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rr > 0);
	free(buf);
	exit_file(from);
	exit_file(to);

	return (0);
}
