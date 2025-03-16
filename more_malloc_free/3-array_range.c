#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array range
 * @min: Lowest number in range
 * @max: Highest number in range
 *
 * Return: Returns NULL if unsuccessful
 * Otherwise returns the newly created array
 */

int *array_range(int min, int max)
{
int size;
int *range;
int index = 0;

if (min > max)
{
return (NULL);
}
if (min <= max)
{
size = max - min + 1;
}
range = malloc(sizeof(int) * size);
if (range == NULL)
{
return (NULL);
}
while (index < size)
{
range[index] = min + index;
index++;
}
return (range);
}
