#include "main.h"

/**
 * print_binary - prints the binary
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 63, len = 0;
	unsigned long int value;

	while (i >= 0)
	{
		value = n >> i;

		if (value & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
			_putchar('0');
		i--;
	}
	if (!len)
		_putchar('0');
}

