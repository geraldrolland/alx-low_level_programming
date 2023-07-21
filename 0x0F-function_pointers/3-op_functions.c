#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
*op_add - sums up to integer value
*@a: integer variable
*@b: integer variable
*Return: a + b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
*op_sub - difference between two integers values
*@a: integer variable
*@b: integer variable
*Return: a - b
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiply both integers values
*@a: integer value
*@b: integer value
*Return: a * b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
*op_div - divide both integers values
*@a: integer variable
*@b: integer variable
*Return: a / b
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
*op_mod - module two integer value
*@a: integer variable
*@b: integer variable
*Return: a % b
*/
int op_mod(int a, int b)
{
	return (a % b);
}
