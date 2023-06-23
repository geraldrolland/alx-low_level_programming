#include "main.h"
/**
* print_square - prints a square, followed by a new line.
*@size: check variable size
* Return: void
*/

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
	if (size == 0 || size < 0)
	{
	_putchar(10);
	break;
	}
	else
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar(10);
	}
	}
}

