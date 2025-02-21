#include "main.h"

/**
 * print_sign - displays if a number is negative or positive.
 *
 * @n: n is the number being tested
 *
 * Return: 1 if the number is greater than zero, 0 if n is 0 and -1 if n is less than 0
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
return(2);
}
