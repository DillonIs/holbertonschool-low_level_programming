#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - A function for checking malloc
 * @b: Unsigned int variable
 * If it fails it returns 98
 * Return: Returns the pointer unless fails
 */

void *malloc_checked(unsigned int b)
{
void *point;

point = malloc(b);
if (point == NULL)
{
exit(98);
}
return (point);
}
