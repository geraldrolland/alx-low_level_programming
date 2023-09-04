#include <stdlib.h>
#include "main.h"
/**
 *str_concat - concatanate two strings
 *@s1: pointer to the first string
 *@s2: pointer to the second string
 *Return: ptr on success or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int j, i, k = 0;
	int size1, size2, size;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	size1 = str_len(s1);
	size2 = str_len(s2);
	size = (size1 + size2) + 1;
	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0, i = 0; ; j++, i++)
	{
		if (*(s1 + j) == '\0')
		{
			*(ptr + i) = *(s2 + k);
			for (; *(s2 + k) != '\0'; k++, i++)
			{
			*(ptr + i) = *(s2 + k);
			}
			*(ptr + i) = '\0';
			break;
		}
		*(ptr + i) = *(s1 + j);
	}
	return (ptr);
}
/**
 *str_len - return the lenght of string
 *@str: pointer to a string
 *Return: len
 */
int str_len(char *str)
{
	int i, len = 0;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	len++;
	}
	return (len);
}
