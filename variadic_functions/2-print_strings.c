#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings in order
 * @separator: Separates the inputs
 * @n: The amount of arguments
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int index = 0;

va_start(list, n);
while (index < n)
{
char *string;
string = va_arg(list, char *);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
if (separator != NULL && (index + 1) != n)
{
printf("%s", separator);
}
index++;
}
printf("\n");
va_end(list);
}
