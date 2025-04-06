#include <stdio.h>
#include "main.h"

/**
 * get_bit - Finds value of a bit of an index
 * @n: Value of long int
 * @index: Position of bit to display
 *
 * Return: Returns 1 or 0 if success otherwise -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	mask <<= index;

	if (mask & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
