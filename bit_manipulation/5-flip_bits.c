#include <stdio.h>
#include "main.h"

/**
 * flip_bits - The number of bits to flip to get from n to m
 * @n: Value of long int 1
 * @m: Value of long int 2
 *
 * Return: Returns the number of bits need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, index;

	index = n ^ m;

	while (index > 0)
	{
		if (index & 1)
		{
			mask++;
		}
		index >>= 1;
	}
	return (mask);
}
