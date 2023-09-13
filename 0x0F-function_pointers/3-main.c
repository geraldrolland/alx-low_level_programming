#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int calc, num1, num2;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
			argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%')
			&& num2 == 0 && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	calc = ptr(num1, num2);
	printf("%d\n", calc);
	return (0);
}
