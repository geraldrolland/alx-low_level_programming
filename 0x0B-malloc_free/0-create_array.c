#include "main.h"
#include <stdlib.h>
/**
*create_array - array of chars, and initializes it with a specific char.
*@size: input value
*@c: input value
*Return: ptr or NULL
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = (char *)malloc(size * sizeof(char));
	if ( ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
