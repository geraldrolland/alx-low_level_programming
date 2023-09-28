#include "main.h"

/**
 * clear_bit - initialize the value of a given bit to 0
 * @n: pointer to the number
 * @index: index of the bit to clear
 * Return: 1 on success or -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > 63)
	{
		return (-1);
	}
	a = ~(1UL << index);

	*n = (a & *n);
	return (1);
}

