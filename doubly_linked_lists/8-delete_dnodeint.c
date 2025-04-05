#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete after a specific node
 * @head: Pointer to head
 * @index: Node to delete after
 *
 * Return: Returns 1 if success or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *ptr;
	unsigned int counter = 0;

	if (*head == NULL || !index)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp != NULL && counter < index - 1)
	{
		temp = temp->next;
		counter++;
	}
	if (temp->next == NULL || temp == NULL)
	{
		return (-1);
	}
	if (temp->next->next == NULL)
	{
		temp->next = NULL;
	}
	else
	{
		ptr = temp->next;
		temp->next = ptr->next;
		ptr->next->prev = temp;
		free(ptr);
		return (1);
	}
	return (-1);
}



