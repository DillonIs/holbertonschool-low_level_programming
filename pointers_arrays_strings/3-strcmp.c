#include "main.h"

/**
 * _strcmp - compares strings between each other
 * @s1: String 1
 * @s2: String 2
 * Return: Returns the difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
int index = 0;

while (s1[index] != '\0' && s2[index] != '\0')
{
if (s1[index] == s2[index])
{
index++;
}
else
{
return (s1[index] - s2[index]);
}
}
if (s1[index] == '\0' && s2[index] != '\0')
{
return (s1[index] - s2[index]);
}
else if (s2[index] == '\0' && s1[index] != '\0')
{
return (s1[index] - s2[index]);
}
return (0);
}
