#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Adds a new node to the start of linked list
 * @head: Double pointer to the head of each node
 * @str: Pointer to struct pointer
 *
 * Return: Returns the new element address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int traverse = 0;
	list_t *list;

	list = malloc(sizeof(list_t));

	if (list == NULL)
	{
		return (NULL);
	}

	while (str[traverse] != '\0')
	{
		traverse++;
	}
	list->len = traverse;
	list->str = strdup(str);
	list->next = *head;
	*head = list;
	return (*head);
}
