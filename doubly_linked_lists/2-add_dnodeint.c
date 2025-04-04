#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds node at start for doubly linked lists
 * @head: Pointer to each node
 * @n: Value to be added
 *
 * Return: Returns the value of newnode
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *NewNode = malloc(sizeof(dlistint_t));

	if (NewNode == NULL)
	{
		return (NULL);
	}
	NewNode->n = n;
	NewNode->prev = NULL;
	NewNode->next = NULL;

	if (*head == NULL)
	{
		NewNode->next = NULL;
		*head = NewNode;
		return (*head);
	}
	temp = *head;
	NewNode->next = temp;
	temp->prev = NewNode;
	*head = NewNode;
	return (NewNode);
}
