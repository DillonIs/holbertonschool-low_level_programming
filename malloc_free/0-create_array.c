#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of char and initializes with a specific char
 * @size: Size of unsigned int
 * @c: Character variable
 *
 * Return: Returns NULL if fail, otherwise returns updated pointer
 */

char *create_array(unsigned int size, char c)
{
unsigned int index = 0;
char *a;

if (size == 0)
{
return (NULL);
}
a = malloc(size * sizeof(char));
if (a == NULL)
{
return (NULL);
}
while (index < size)
{
a[index] = c;
index++;
}
return (a);
}
