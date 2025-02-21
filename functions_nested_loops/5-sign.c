#include "main.h"

/**
 * print_sign - displays if a number is negative or positive.
 *
 * @n: n is the number being tested
 *
 * Return: displays if a number is above below or zero
 */

int print_sign(int n)
{
if (n >= 48)
{
_putchar(43);
return (1);
}
if (n == 0)
{
_putchar(48);
return (0);
}
if (n <= 48)
{
_putchar(45);
return (-1);
}
else
return (2);
}
