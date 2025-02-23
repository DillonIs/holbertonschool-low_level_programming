#include "main.h"

/**
 * times_table - multiplication table
 *
 */

void times_table(void)
{
int n, x;
int y;
for (n = 0; n <= 9; n++)
{
for (x = 0; x <= 9; x++)
{
y = n * x;
if (x == 0)
{
_putchar((y % 10) + '0');
}
else if (y >= 10)
{
_putchar(' ');
_putchar((y / 10) + '0');
_putchar((y % 10) + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar((y % 10) + '0');
}
if (x < 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
