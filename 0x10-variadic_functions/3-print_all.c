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
	float float_num;
	char *string;

	va_start(list, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				ch = va_arg(list, int);
				printf("%c", ch);
				break;
			case 's':
				string = va_arg(list, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s", string);
				break;
			case 'f':
				float_num = va_arg(list, double);
				printf("%f", float_num);
				break;
			case 'i':
				int_num = va_arg(list, int);
				printf("%d", int_num);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
