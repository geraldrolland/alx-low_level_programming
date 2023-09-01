#include <stdio.h>
#include "main.h"
/**
 *main - print the number of argument
 *@argc: number of argument
 *@argv: argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
