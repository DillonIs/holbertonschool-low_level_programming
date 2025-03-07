#include "main.h"
#include <stddef.h>

/**
 * _strchr - Finds and prints after first occurence of c
 * @s: String being tested
 * @c: The character to find
 *
 * Return: Returns the pointer after first c
 */

char *_strchr(char *s, char c)
{
int index = 0;

while (s[index] != '\0')
{
if (s[index] == c)
{
return (s + index);
}
if (s[index] == 0)
{
return (NULL);
}
index++;
}
return (NULL);
}
