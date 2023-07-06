#include "main.h"
int _strlen_recur(int count, char *s);
int str_comp_recur(char *s1, char *s2, int n);
/**
*wildcmp - compare two string
*@s1: pointer accept address of string s1
*@s2: pointer accept address of string s2
*Return: 1 if identical , 0 if not
*/
int wildcmp(char *s1, char *s2)
{
	int count = 0;
	int res_count1, res_count2;
	int prime_res;

	res_count1 = _strlen_recur(count, s1);
	res_count2 = _strlen_recur(count, s2);
	if (res_count1 != res_count2)
	{
		return (0);
	}
	else
	{
		int n = 0;

		prime_res = str_comp_recur(s1, s2, n);
		if (prime_res == res_count1)
		{
			return (1);
		}
		else
		{
			return (0);
		}

	}

}
/**
*_strlen_recur - calculate lenght of a string
*@count: imput value
*@s: accept string address
*Return: count
*/
int _strlen_recur(int count, char *s)
{
	if (*s == '\0')
	{
		return (count);
	}
	else
	{
		count = count + 1;
		s = s + 1;
		_strlen_recur(count, s);
	}
}
/**
*str_comp_recur - compare two strings
*@s1: accept address of s1
*@s2: accept address of s2
*@n: input value
*Return: 0 , 0 and 1
*/
int str_comp_recur(char *s1, char *s2, int n)
{
	int res;

	if (*s1 == '\0')
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
		s1 = s1 + 1;
		s2 = s2 + 1;
		res = n + 1 + str_comp_recur(s1, s2, n);
		return (res);
	}
	else
	{
		s1 = s1 + 1;
		s2 = s2 + 1;
		res = n - 1 + str_comp_recur(s1, s2, n);
		return (res);
	}
}
