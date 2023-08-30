#include "main.h"
/**
 *is_palindrome - returns 1 if a string is palindrome and 0 if not
 *@s: pointer to a string
 *Return: res on success
 */
int is_palindrome(char *s)
{
	int res;
	char ch = *s;

	if (*s == '\0')
		return (0);

	res = check_palin(s, ch);

	return (res);
}
/**
 *check_palin - check if a number is a palindrome
 *@s: pointer to a string
 *@ch: character variable
 *Return: num on success
 */
int check_palin(char *s, char ch)
{
	int num;

	s = s + 1;
	if (*s == ch && *(s + 1) == '\0')
		return (1);
	if (*s != ch && *(s + 1) == '\0')
		return (0);
	num = check_palin(s, ch);
	return (num);
}
