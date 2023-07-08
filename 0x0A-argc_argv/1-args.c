#include "main.h"
#include <stdio.h>

/**
*main - Entry point
*@argc: input value
*@argv: input value
*Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void) argv[0];
	printf("%d\n", (argc - 1));
	return (0);
}
