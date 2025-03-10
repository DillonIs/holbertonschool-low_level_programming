#include "main.h"

/**
 * _pow_recursion - Calculates the x to the power of y
 * @x: Base number
 * @y: Exponent number
 *
 * Return: Returns -1 for negative numbs, 1 for 0 and the power of
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
