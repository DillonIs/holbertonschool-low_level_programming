#include "main.h"

/**
 * factorial - Calculates the factorial of n
 * @n: The number being tested
 *
 * Return: Returns -1 if an error, 1 if n is 0 and fact
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
