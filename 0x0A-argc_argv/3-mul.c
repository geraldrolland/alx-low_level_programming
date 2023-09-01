#include <stdio.h>
#include "main.h"
/**
 *main - adds two number
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 * num2);
	return (0);
}
