#include "main.h"

/**
 * _isdigit - finds if c is a digit
 *
 * @c: c is the value being tested
 *
 * Return: 1 if c is a digit
 *
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
