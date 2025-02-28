#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string
 *
 */

void puts_half(char *str)
{
int stringlen, middle;

stringlen = 0;

while (str[stringlen] != '\0')
{
stringlen++;
}
if (stringlen % 2 == 0)
{
middle = stringlen / 2;
while (middle < stringlen)
{
_putchar(str[middle]);
middle++;
}
}
else
{
middle = (stringlen + 1) / 2;
while (middle < stringlen)
{
_putchar(str[middle]);
middle++;
}
}
_putchar('\n');
}
