#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: number of bits to alter
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, len = 0;
	unsigned long int value;
	unsigned long int x = n ^ m;

	i = 63;
	while (i >= 0)
	{
		value = x >> i;
		if (value & 1)
			len++;
		i--;
	}

	return (len);
}

