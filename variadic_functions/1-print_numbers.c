#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prrints numbers followed by new line
 * @separator: Identifies ,SPACE
 * @n: Amount to print
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int index = 0;

va_start(list, n);
while (index < n)
{
printf("%d", va_arg(list, const unsigned int));
if (separator != NULL && index != (n - 1))
{
printf("%s", separator);
}
index++;
}
printf("\n");
va_end(list);
}
