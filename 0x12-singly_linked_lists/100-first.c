#include <stdio.h>
void print_me(void)__attribute__((constructor));

/**
*print_me - print a sentence before main function
*/

void print_me(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
