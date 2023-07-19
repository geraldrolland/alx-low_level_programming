#include "function_pointers.h"
#include <stdio.h>
/**
*print_name - print a name
*@name: pointer to a string
*@f: pointer to a function
*Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
