#include "main.h"
/**
 * print_diagonal - diagonal line
 * amtrow - amount of rows
 * blankspace - amount of spaces
 * @n: number being tested
 */

void print_diagonal(int n)
{
int amtrow = 0;
int blankspace = 1;
if (n > 0)
while (amtrow < n)
{
blankspace = 0;
while (blankspace < amtrow)
{
_putchar(' ');
blankspace = blankspace + 1;
}
_putchar('\\');
_putchar('\n');
amtrow = amtrow + 1;
}
_putchar('\n');
}
