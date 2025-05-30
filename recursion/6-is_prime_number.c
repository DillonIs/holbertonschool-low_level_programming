#include "main.h"

/**
 * is_prime_number - Finds if n is a prime number
 * @n: The number being tested
 *
 * Return: Returns 0 if n is less or equal to 1
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (prime_checker(n, 2));
}

/**
 * prime_checker - Helper function for checking primes
 * @n: The number being tested
 * @divisor: Divisor variable
 *
 * Return: Returns 1 if n is prime
 * Otherwise returns 0
 */
int prime_checker(int n, int divisor)
{
if (divisor * divisor > n)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (prime_checker(n, divisor + 1));
}
