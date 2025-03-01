#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array indentifier
 * @n: the array number
 */

void print_array(int *a, int n)
{
int position = 0;

while (position < n)
{
printf("%d", a[position]);
position++;
if (position < n - 1)
printf(", ");
}
printf("\n");
}
