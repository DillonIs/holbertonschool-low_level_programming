#include "main.h"

/**
 * print_most_numbers - prints numbers except
 *
 * n - variable for numbers
 *
 */

void print_most_numbers(void)
{
char n = '0';
while (n <= 57)
{
if (n != '2' && n != '4')
{
_putchar(n);
}
n++;
}
_putchar('\n');
}
