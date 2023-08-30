#include "main.h"
/**
 *wildcmp - compare two string
 *@s1: pointer to the first string
 *@s2: pointer to the second string
 *Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	int res;

	if (*s1==*s2 && *(s1+1)=='\0' && *(s2+1)=='\0'){
		return 1;
	}
	if (*s1==*s2){
		s1=s1+1;
		s2=s2+1;
		res = wildcmp(s1,s2);
		return res;
	}
	else{
		return 0;
	}
}
