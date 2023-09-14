#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - print anything
 *@format: pointer to a string
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int int_num;
	char ch;
	char *string;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'i')
		{
			int_num = va_arg(list, int);
			printf("%d", int_num);
		}
		else if (format[i] == 'c')
		{
			ch = va_arg(list, int);
			printf("%c", ch);
		}
		else if (format[i] == 's')
		{
			string = va_arg(list, char *);
			printf("%s", string);
		}
		if (format[i + 1] != '\0' &&
				(format[i] == 'i' || format[i] == 'c' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
