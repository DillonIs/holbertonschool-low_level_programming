#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Adds each node together
 * @head: Pointer to head of list
 *
 * Return: Returns the final value the sum of each node
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
