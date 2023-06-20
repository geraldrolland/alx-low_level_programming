#include <unistd.h>

/**
 * _putchar writes the character c to stdout
 *return 1 on success
 *return -1 on erro 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
