#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints a doubly linked list
 *
 * @h: Pointer to the head of each node
 *
 * Return: Returns the value of each node
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int index = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		index++;
	}
	return (index);
}
