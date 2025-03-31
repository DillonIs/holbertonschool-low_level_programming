#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements in a singly linked list
 * @h: Pointer to the head of each node
 * Return: Returns the value of traverse
 */

size_t print_list(const list_t *h)
{
	unsigned int traverse = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		traverse++;
	}
	return (traverse);
}
