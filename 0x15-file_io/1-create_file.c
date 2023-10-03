#include <stdlib.h>
#include "main.h"
size_t _strlen(char *str);
/**
 *create_file - creates a file.
 *@filename: name of file
 *@text_content: text content
 *Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, buf = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR, 0600);
		if (fd == -1)
			return (-1);
		close(fd);
	}
	else
	{
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	buf = write(fd, text_content, _strlen(text_content));
	if (buf == -1)
	{
		return (-1);
	}
	close(fd);
	}
	return (1);
}
/**
 *_strlen - return the lenght of string
 *@str: pointer to a string
 *Return: count
 */
size_t _strlen(char *str)
{
	int i;
	size_t count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
