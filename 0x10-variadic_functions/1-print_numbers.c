#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *print_numbers - print numbers
 *@separator: pointer to a string
 *@n: size of arguments parsed
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(list, int));
			printf("%s", separator);
			continue;
		}
		printf("%d", va_arg(list, int));
	}
	va_end(list);
	printf("\n");
}
