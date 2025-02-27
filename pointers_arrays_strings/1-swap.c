#include "main.h"

/**
 * swap_int - swaps integers
 * @a: Integer a first variable
 * @b: Integer b second variable
 *
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
