#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print a name from a function pointer
 * @name: Character string
 * @f: Function pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
