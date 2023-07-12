#include "main.h"
#include <stdlib.h>
/**
*_strdup -  which contains a copy of the string given as a parameter.
*@str: input value
*Return: NULL or ptr
*/
char *_strdup(char *str)
{
	char *ptr;
	int i, size, count;

	count = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0' ; i++)
	{
		count = count + 1;

	}
	size = count;
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(ptr + i) = *(str + i);
	}
	*(ptr + i) = '\0';
	return (ptr);
}
