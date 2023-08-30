#include "main.h"
/**
 *_print_rev_recursion - print a string in reverse
 *@s: pointer to a string
 *Return: void 
 */
void _print_rev_recursion(char *s)
{
	if (*(s) == '\0'){
	_putchar('\n');
	return;
	}

	s = s + 1;
	_print_rev_recursion(s);
	_putchar(*s);
}
