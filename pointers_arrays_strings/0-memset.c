#include "main.h"

/**
 * _memset - replaces memory locations
 * @s: string pointer
 * @b: Constant value of byte
 * @n: Number of iterations to run
 *
 * Return: Returns the updated memory set
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int count = 0;

while (count < n)
{
s[count] = b;
count++;
}
return (s);
}
