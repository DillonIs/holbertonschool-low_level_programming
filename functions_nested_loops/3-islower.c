#include "main.h"

/**
 * _islower - finds if c is lowercase
 *
 * @c: c is the letter being tested
 *
 * Return: 1 if c is lowercase
 *
 */

int _islower(int c)
{

if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
