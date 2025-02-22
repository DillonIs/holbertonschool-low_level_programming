#include "main.h"

/**
 * jack_bauer - 24 hour clock
 *
 * m - minutes
 *
 * h - hours
 *
 */

void jack_bauer(void)
{
int m = 0;
int h = 0;
while (h <= 23)
{
while (m <= 59)
{
_putchar('0' + h / 10);
_putchar('0' + h % 10);
_putchar(':');
_putchar('0' + m / 10);
_putchar('0' + m % 10);
_putchar('\n');
m++;
}
m = 0;
h++;
}
}
