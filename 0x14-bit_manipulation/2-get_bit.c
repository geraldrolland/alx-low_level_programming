#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number input
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value, a;

	if (index > 63)
	{
		return (-1);
	}
	a = n >> index;
	value = a & 1;

	return (value);
}

