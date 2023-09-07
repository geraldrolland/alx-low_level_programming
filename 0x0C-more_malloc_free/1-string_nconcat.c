#include <stdlib.h>
#include "main.h"
/**
 *string_nconcat -  concatenates two strings.
 *@s1: pointer to the first string
 *@s2: pointer to the second string
 *@n: size of s2 memory block
 *Return: ptr on success or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (n >= _strlen(s2))
		n = _strlen(s2);
	ptr = malloc(sizeof(char) * (_strlen(s1) + n));
	if (ptr == NULL)
		return (NULL);
	for (i = 0;; i++)
	{
		if (s1[i] == '\0' && n > 0)
		{
			ptr[i] = s2[j];
			i++;
			j++;
			for (; j < n; j++, i++)
			{
				ptr[i] = s2[j];
			}
			ptr[i] = '\0';
			break;
		}
		if (s1[i] == '\0' && n <= 0)
		{
			ptr[i] = '\0';
			break;
		}
		ptr[i] = s1[i];
	}
	return (ptr);
}
/**
 *_strlen - return the lenght of a string
 *@str: pointer to a string
 *Return: len
 */
unsigned int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
