#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_numbers - print numbers
*@separator: pointer to a string
*@n: number of variables
*@...: list of variables
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int temp;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(list, int);
		printf("%d", temp);
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
