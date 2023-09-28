#include "main.h"
#include <stdlib.h>
int _strlen(const char *str);
unsigned int _pow(int a, int i);
/**
 *binary_to_uint - convert binary number to decimal number
 *@b: pointer the a string of binary
 *Return: ssum on succes or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i;
	int len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	len--;
	for (i = 0; b[i] != '\0'; i++, len--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '0')
		{
			continue;
		}
		sum = sum + (1 * _pow(2, len));
	}
	return (sum);
}
/**
 *_pow - return the square root of a number
 *@a: base number
 *@i: index number
 *Return: return prod on success
 */
unsigned int _pow(int a, int i)
{
	int k = 0;
	int prod = 1;

	while (k < i)
	{
		prod = prod * a;
		k++;
	}
	return (prod);
}
/**
 *_strlen - calculate the lenght of a string
 *@str: pointer to a stirng
 *Return: size
 */
int _strlen(const char *str)
{
	int j;
	int size = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		size++;
	}
	return (size);
}
