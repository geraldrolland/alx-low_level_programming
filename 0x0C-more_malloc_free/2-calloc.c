#include "main.h"
#include <stdlib.h>
/**
*_calloc - that allocates memory for an array, using malloc.
*@nmemb: input value
*@size: input value
*Return: NULL or ptr1
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr1;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr1 = malloc(nmemb * size);
	if (ptr1 == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		ptr1[i] = 0;
	}
	return (ptr1);
}
