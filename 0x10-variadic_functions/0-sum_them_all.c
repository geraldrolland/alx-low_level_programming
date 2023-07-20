#include "variadic_functions.h"
#include <stdarg.h>
/**
*sum_them_all - sum a list of variable
*@n: number of argument
*@...: number of argument
*Return: 0 if n==0 or sum on success
*/
int sum_them_all(const unsigned int n, ...)
{
	/*if (n == 0)*/
	/*	return (0);*/
	va_list ap;
	unsigned int i;
	unsigned int sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
