#include "main.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: variable
 *@y: variable
 *Return: num on success
 */
int _pow_recursion(int x, int y)
{
	int num;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	y--;
	num = x * _pow_recursion(x, y);
	return (num);
}

