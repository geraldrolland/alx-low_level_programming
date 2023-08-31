#include "main.h"
/**
 *is_prime_number - returns 1 if the input integer is a prime number
 *@num: variable of an interger
 *Return: 1 or 0
 */
int is_prime_number(int num)
{
	int i, res;

	if (num <= 1)
	{
	return (0);
	}
	i = num;
	i--;
	res = check_prime(num, i);
	return (res);
}
/**
 *check_prime - checks for a prime number
 *@num: variable of the integer
 *@i: iterator
 *Return: 1 or 0
 */
int check_prime(int num, int i)
{
	int p;

	if (num % i == 0 && i != 1)
	{
		return (0);
	}
	if (i == 1)
	{
		return (1);
	}
	i--;
	p = check_prime(num, i);
	return (p);
}
