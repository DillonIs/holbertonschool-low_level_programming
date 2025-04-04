#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds node to end of double linked lists
 * @head: Pointer to head
 * @n: Value or data for nodes
 *
 * Return: Returns data of each node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *NewNode = malloc(sizeof(dlistint_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}

	NewNode->n = n;
	NewNode->prev = NULL;
	NewNode->next = NULL;

	temp = *head;

	if (*head == NULL)
	{
		NewNode->prev = NULL;
		*head = NewNode;
		return (NewNode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = NewNode;
	NewNode->prev = temp;
	return (NewNode);
}
