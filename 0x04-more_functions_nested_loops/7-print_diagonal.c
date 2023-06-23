#include "main.h"
/**
*print_diagonal - function that draws a diagonal line on the terminal
*@n: check character c
*Return: void
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
	_putchar(10);
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	for (j = 0; j < i; j++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar(10);
	}
	}
}
