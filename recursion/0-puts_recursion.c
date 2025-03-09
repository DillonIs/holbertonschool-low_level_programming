#include "main.h"

/**
 * _puts_recursion - Recursive function for puts
 * Prints a string followed by a newline
 *
 * @s: String identifier as pointer
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
