#include <stdio.h>
#include "main.h"

/**
 * set_bit - Changes a bit at an index
 * @n: Pointer to the long int
 * @index: The bit position to be changed
 *
 * Return: Returns 1 if success or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(n) * 8)
	{
		*n = *n | (1 << index);
		return (1);
	}

	return (-1);
}
