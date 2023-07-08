#include "main.h"
/**
*wildcmp - compare two string
*@s1: pointer accept address of string s1
*@s2: pointer accept address of string s2
*Return: 0
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 !='\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '*')
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
		else if (*s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
		return (0);
	}
}
