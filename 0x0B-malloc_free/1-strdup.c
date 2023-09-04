#include <stdlib.h>
#include "main.h"
/**
 *_strdup - return copy of string
 *@str: pointer to a string
 *Return: ptr on success or NULL on failure
 */
char *_strdup(char *str)
{
	int k, i;
	char *ptr;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; *(str + k) != '\0'; k++)
	{
		size++;
	}
	size++;
	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = *(str + i);
	}
	*(ptr + i) = '\0';
	return (ptr);
}
