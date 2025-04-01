#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Lists the number of elements in singly linked lists
 * @h: Pointer to the head of each node
 *
 * Return: Return 0 if NULL else returns the index
 */

size_t list_len(const list_t *h)
{
	int elementcount = 0;
	const list_t *list;

	list = malloc(sizeof(list_t));
	list = h;
	if (list == NULL)
	{
		return (0);
	}

	while (list != NULL)
	{
		list = list->next;
		elementcount++;
	}
	return (elementcount);
}
