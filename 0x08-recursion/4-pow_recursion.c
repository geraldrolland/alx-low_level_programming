#include "main.h"
/**
*_pow_recursion -  returns the value of x raised to the power of y
*@x: input value
*@y: input value
*Return: 1, x, prod
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else if (y == 1)
	{
	return (x);
	}
	else
	{
	int prod;

	y--;
	prod = x * _pow_recursion(x, y);
	return (prod);
	}
}
