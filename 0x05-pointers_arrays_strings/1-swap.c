#include "main.h"
/**
*swap_int - Entry point
*@a:check character a
*@b:check character b
*Return: void
*/

void swap_int(int *a, int *b)
{
	a = &a;
	b = &b;

	*a = b;
	*b = a;
}
