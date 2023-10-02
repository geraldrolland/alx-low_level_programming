#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 *read_textfile -  reads a text file and prints it to the standard output.
 *@filename: name of the file in string format
 *@letters: size of the buffer
 *Return: len on success or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buffer;
	ssize_t size_of_buf, buf_len;

	if (filename == NULL)
		return (0);
	fd = open(filename, (O_CREAT | O_RDONLY));
	if (fd == -1)
	return (0);
	buffer = malloc(sizeof(char) * letters);
	size_of_buf = read(fd, buffer, letters);
	if (size_of_buf == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buf_len = write(STDOUT_FILENO, buffer, size_of_buf);
	if (buf_len == 0 || buf_len == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (buf_len);
}
