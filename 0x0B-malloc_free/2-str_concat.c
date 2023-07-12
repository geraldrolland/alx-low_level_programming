#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
*str_concat - Write a function that concatenates two strings.
*@s1: input value
*@s2: input value
*Return: NULL, ptr
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int size, i, k;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size =  strlen(s1) + strlen(s2);
	ptr = (char *)malloc(size * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1) + 1; i++)
	{
		*(ptr + i) = *(s1 + i);
		if (*(ptr + i) == '\0')
		{
			*(ptr + i) = ' ';
			for (k = 0; k < strlen(s2); i++, k++)
			{
				*(ptr + i) = *(s2 + k);
			}
			*(ptr + i) = '\0';
			break;
		}
	}
	return (ptr);
}
