#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks if a machine is little or big endian
 * Return: 0 for big endian, 1 for little endian
 */

int get_endianness(void)
{

	unsigned int z = 1;
	char *c = (char *)&z;

	return (*c);

}

	int main(void)
{
	int endianness = get_endianness();

	if (endianness)
		printf(Little Endian\n);
	else
		printf(Big Endian\n);

	return (0);

}

