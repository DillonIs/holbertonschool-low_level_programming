#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include "print_functions.h"

/**
 * print_all - Prints anything
 *
 * @format: Format of values to be printed
 *
 */

void print_all(const char * const format, ...)
{
print_t functions[] = {
{"c", print_letter},
{"s", print_string},
{"i", print_integer},
{"f", print_float}
};

int index, j, length;
char *separator = "";
va_list arguments;
va_start(arguments, format);

length = 4;

index = 0;

while (format && (*(format + index)))
{
j = 0;

while (j < length && (*(format + index) != *(functions[j].specifer)))
{
j++;
}
if (j < length)
{
printf("%s", separator);
functions[j].print_func(arguments);
separator = ", ";
}
index++;
}
printf("\n");
va_end(arguments);
}
