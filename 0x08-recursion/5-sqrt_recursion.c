#include "main.h"
/**
 *_sqrt_recursion - returns the square root of number
 *@n: variable
 *Return: res on success
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	int  res = find_sqrt(n, i);

	return (res);

}
/**
 *find_sqrt - find the square root of a number
 *@n: variable
 *@i: variable
 *Return: num on success
 */
int find_sqrt(int n, int i)
{
	int num;

	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	i++;
	num = find_sqrt(n, i);
	return (num);
}
