#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new data at n node
 * @h: Pointer to head of list
 * @idx: Node to add after
 * @n: Struct integer
 *
 * Return: Returns new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *NewNode = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int counter = 0;

	if (h == NULL || NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;
	NewNode->next = NULL;
	NewNode->prev = NULL;
	current = *h;

	if (idx == 0)
	{
		NewNode = add_dnodeint(h, n);
		return (NewNode);
	}

	while (current)
	{
		if (current->next == NULL && counter == idx - 1)
		{
			NewNode = add_dnodeint_end(h, n);
			return (NewNode);
		}
		else if ((idx - 1) == counter)
		{
			NewNode->next = current->next;
			NewNode->prev = current;
			current->next->prev = NewNode;
			current->next = NewNode;
			return (NewNode);
		}
		counter++;
		current = current->next;
	}
	free(NewNode);
	return (NULL);
}
