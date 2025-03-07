#include "main.h"

/**
 * _strspn - Gets the length of a prefix sustring
 * @s: String being tested
 * @accept: What string is being tested against
 *
 * Return: Returns the count of matches
 */

unsigned int _strspn(char *s, char *accept)
{
int count = 0;
int index = 0;

while (s[index] != '\0')
{
int aindex = 0;
int match = 0;
while (accept[aindex] != '\0')
{
if (s[index] == accept[aindex])
{
count++;
match = 1;
break;
}
aindex++;
}
if (!match)
{
break;
}
index++;
}
return (count);
}
