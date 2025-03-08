#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of diagonal array locations
 * @a: The array identifier
 * @size: The size of the array
 *
 */

void print_diagsums(int *a, int size)
{
int rows = 0;
int firstsum = 0;
int secondsum = 0;

while (rows < size)
{
firstsum += a[rows * size + rows];
secondsum += a[rows * size + (size - rows - 1)];
rows++;
}
printf("%d, %d\n", firstsum, secondsum);
}
