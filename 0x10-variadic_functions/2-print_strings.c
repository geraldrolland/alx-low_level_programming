#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - print strings
*@separator: pointer to string
*@n: number of varaiable
*@...: variable passed
*Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		printf("%s", str);
		if (i != (n - 1) && separator != 0)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
