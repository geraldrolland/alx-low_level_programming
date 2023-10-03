#include <unistd.h>
#include <stdlib.h>
#include "main.h"
size_t _strlen(char *str);
/**
 *append_text_to_file - append text to an existing file
 *@filename: pointer to the file name
 *@text_content: text conetent
 *Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, (O_WRONLY | O_APPEND));
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		wr = write(fd, text_content, _strlen(text_content));
		if (wr == -1)
		{
			close(fd);
			return (-1);
		}

	}
	close(fd);
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

