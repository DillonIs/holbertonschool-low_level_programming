#include "main.h"

/**
 * more_numbers - prints numbers above 9
 *
 * stop - ends the program
 *
 * n - numbers
 *
 * Return: No return type (void)
 */

void more_numbers(void)
{
int stop, n;
stop = 9;
n = 0;
while (stop >= 0)
{
while (n <= 14)
{
if (n > 9)
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
n++;
}
n = 0;
_putchar('\n');
stop--;
}
}
