#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: Variable for array
 * @size: Number of elements in array
 * @cmp: Compare value
 *
 * Return: Returns -1 if no matches or size is 0 or below
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;

if (size <= 0 || array == NULL || cmp == NULL)
{
return (-1);
}
while (index < size)
{
if (cmp(array[index]))
{
return (index);
}
index++;
}
return (-1);
}
