/**
 * get_endianness - checks if it is little or big endian
 * Return: 0 for big endian,  or  1 for little endian
 */
int get_endianness(void)
{
	unsigned int k;
	char *c;

	k = 1;
	c = (char *) &k;

	return (*c);
}

