#include "main.h"

/**
 * _sqrt_recursion - Finds the natural square root
 * @n: The number being tested
 *
 * Return: Returns -1 if negative or higher than n
 * Otherwise returns n or the square root
 */

int _sqrt_recursion(int n)
{

if (n < 0)
{
return (-1);
}
if (n <= 1)
{
return (n);
}
return (sqrt_helper(n, 1));
}
/**
 * sqrt_helper - Helper function for recursion
 * @guess: Best guess of square root
 * @n: Number being tested
 *
 * Return: Returns -1 when greater than n or guess when true
 */
int sqrt_helper(int n, int guess)
{
if (guess * guess > n)
{
return (-1);
}
if (guess * guess == n)
{
return (guess);
}
return (sqrt_helper(n, guess + 1));
}
