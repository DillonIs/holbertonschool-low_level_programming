#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Displays length of doubly linked list
 *
 * @h: Pointer to each node
 *
 * Return: Returns the amount of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int elecount = 0;

	while (h)
	{
		h = h->next;
		elecount++;
	}
	return (elecount);
}
