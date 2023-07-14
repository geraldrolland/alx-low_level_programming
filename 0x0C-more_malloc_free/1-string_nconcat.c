#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - Write a function that concatenates two strings.
*@s1: input value
*@s2: input value
*@n: input value
*Return: ptr1
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, l = 0, k = 0;
	char *ptr1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	ptr1 = malloc(sizeof(char) * l + 1);
	if (ptr1 == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			ptr1[j] = s1[j];
		if (j >= i)
		{
			ptr1[j] = s2[k];
			k++;
		}
		j++;
	}
	ptr1[j] = '\0';
	return (ptr1);
}
