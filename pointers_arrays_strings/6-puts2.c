#include "main.h"

/**
 * puts2 - only prints even numbers
 * @str: array of numbers
 *
 */

void puts2(char *str)
{
int strlen = 0;

while (str[strlen] != '\0')
{
if (strlen % 2 == 0)
{
_putchar(str[strlen]);
}
strlen++;
}
_putchar('\n');
}
