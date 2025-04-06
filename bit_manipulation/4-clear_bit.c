#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Unsets a bit at a given index
 * @n: Pointer to long int value
 * @index: Position of bit to unset
 *
 * Return: Returns 1 if success otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index < sizeof(n) * 8)
	{
		*n = (*n & ~mask);
		return (1);
	}
	return (-1);
}
