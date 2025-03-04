#include "main.h"

/**
 * reverse_array - reverses the order of an array
 * @a: Array variable
 * @n: Amount in the array
 *
 */

void reverse_array(int *a, int n)
{
int temp, index_start, index_end;

index_start = 0;
index_end = n - 1;

while (index_start < index_end)
{
temp = a[index_start];
a[index_start] = a[index_end];
a[index_end] = temp;
index_start++;
index_end--;
}
}
