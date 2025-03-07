#include "main.h"

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
return (s);
}
if (s[index] == 0)
{
return (0);
}
index++;
}
return (0);
}
