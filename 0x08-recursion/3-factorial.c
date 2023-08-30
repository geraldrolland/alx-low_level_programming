#include "main.h"
/**
 * factorial - returns the factorial of a given number
 *@n: variable of the number
 *Return: num on success
 */
int factorial(int n)
{
	int num;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	num = n * factorial((n - 1));
	return (num);
}

