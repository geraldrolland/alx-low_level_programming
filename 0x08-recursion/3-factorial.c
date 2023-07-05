#include "main.h"
/**
*factorial - returns the factorial of a given number.
*@n: input value
*Return: -1, 1 and prod
*/
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	int prod;

	prod = n * factorial(n - 1);
	return (prod);
	}
}
