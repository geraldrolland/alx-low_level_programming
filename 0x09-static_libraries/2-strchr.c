#include "main.h"
#include <stddef.h>
/**
*_strchr -function that locates a character in a string.
*@s:input value
*@c: input value
*Return: a pointer to the first occurrence of the character c , or NULL
*/
char *_strchr(char *s, char c)
{
        int count;
        int j;
        int i;

        count = 0;
        for (i = 0; *(s + i) >= '\0'; i++)
        {
                count = count + 1;
        }
        for (j = 0; j < count ; j++)
        {
                if (*(s + j) == c)
                {
                        return (s + j);
                }
                else
                {
                        continue;
                }
        }
        return (NULL);
}
