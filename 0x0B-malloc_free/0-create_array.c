#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates an array initializes it with a specific char.
 *@size: size of an array
 *@c: character variable
 *Return: ptr on success or NULL of failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL || size <= 0)
	{
		return (NULL);

	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	*(ptr + i) = '\0';
	return (ptr);
}

