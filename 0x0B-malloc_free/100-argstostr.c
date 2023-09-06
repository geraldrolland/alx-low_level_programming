#include <stdlib.h>
#include "main.h"
/**
 *argstostr - concatenates all the arguments of your program.
 *@ac: argument count
 *@av: argument vector
 *Return: ptr on success or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, av_size;
	char *ptr;

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	av_size = av_lenght(ac, av);
	ptr = (char *)malloc(sizeof(char) * (av_size + ac + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (av[i])
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
		{
			ptr[k] = av[i][j];
		}
		ptr[k] = '\n';
		k++;
		i++;
	}
	k++;
	ptr[k] = '\0';
	return (ptr);
}
/**
 *av_lenght - count the number of characters  argument
 *@ac: argument count
 *@av: argument vector
 *Return: av_len on success
 */
int av_lenght(int ac, char **av)
{
	int i, j, av_len = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			av_len++;
		}
	}
	return (av_len);
}
