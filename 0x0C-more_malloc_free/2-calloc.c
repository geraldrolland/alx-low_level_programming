#include <stdlib.h>
#include "main.h"
/**
 *_calloc - allocates memory for an array, using malloc.
 *@nmemb: number of memory block
 *@size: size of each memory block
 *Return: ptr1 on sucess or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr1;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr1 = malloc((nmemb + 1) * size);
	if (ptr1 == NULL)
		return (NULL);
	for (i = 0; i < nmemb + 1; i++)
	{
		ptr1[i] = 0;
	}
	ptr1[i] = '\0';
	return (ptr1);
}
