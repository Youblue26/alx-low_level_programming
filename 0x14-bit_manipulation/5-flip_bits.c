#include "main.h"

/**
 * flip_bits - Changes num of bits counted
 * gets from one num to another
 * @n: first num
 * @m: second numb
 *
 * Return: num of bits to be  change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		current = exclusive >> z;
		if (current & 1)
			count++;
	}

	return (count);
}

