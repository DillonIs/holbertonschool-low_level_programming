#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: Pointer to the string where bin is saved
 *
 * Return: Returns the decimals of binary
 */

unsigned int binary_to_uint(const char *b)
{
	signed int index = 0, total = 0, decval;

	decval = 1;

	if (!b)
	{
		return (0);
	}

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}

		total <<= 1;

		if (b[index] & 1)
		{
			total += decval;
		}
		index += 1;
	}
	return (total);
}
