#include "main.h"
/**
* print_number - Write a function that prints an integer
*@n:check character n
* Return: Always 0 (Success)
*/

void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
	n *= -1;
	k = n;
	_putchar('_');
	}
	k /= 10;
	if (k != 0)
	print_number(k);
	_putchar((unsigned int) n % 10 + '0');
}

