#include "main.h"

/**
 * _strlen_recursion - Calculates the length of string
 * @s: Points to the string being tested
 *
 * Return: Returns 0 if NULL otherwise returns length
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
