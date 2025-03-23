#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all parameters
 * @n: The amount of items
 *
 * Return: Returns the result as sum, 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int sum;
unsigned int index;

sum = 0;
index = 0;
va_start(ap, n);

while (index < n)
{
sum += va_arg(ap, int);
index++;
}
va_end(ap);
return (sum);
}
