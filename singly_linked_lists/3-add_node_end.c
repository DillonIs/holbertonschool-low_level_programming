#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - Finds the full length
 * @str: Pointer to struct
 *
 * Return: Returns the length of string
 */

int _strlen(const char *str)
{
	unsigned int strlength = 0;

	while (str[strlength] != '\0')
	{
		strlength++;
	}
	return (strlength);
}

/**
 * add_node_end - Adds a new node to the end
 * @head: Double pointer to each node
 * @str: Pointer to struct
 *
 * Return: Address of new node, or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *last;

	last = malloc(sizeof(list_t));

	if (last == NULL)
	{
		return (NULL);
	}
	last->str = strdup(str);
	last->len = _strlen(str);
	last->next = NULL;

	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		list = *head;

		while (list->next)
		{
			list = list->next;
		}
		list->next = last;
	}
	return (last);
}

