#include "main.h"
/**
 *_print_rev_recursion - print a string in reverse
 *@s: pointer to a string
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s = s + 1;
	_print_rev_recursion(s);
	if (*(s + 1) == 'n' && *s == '\\')
		_putchar('\n');
	_putchar(*s);
}
