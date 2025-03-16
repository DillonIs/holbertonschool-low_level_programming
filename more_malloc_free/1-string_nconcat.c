#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Adds s2 to s1 for n bytes
 * @s1: First string
 * @s2: Second string
 * @n: Amount of bytes to add from s2
 *
 * Return: Returns NULL when unsuccessful
 * Otherwise returns the updated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1index = 0;
unsigned int s2index = 0;
char *String3;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[s1index] != '\0')
{
s1index++;
}
while (s2[s2index] != '\0')
{
s2index++;
}
if (n > s2index)
{
n = s2index;
}
String3 = malloc((s1index + n + 1));
if (String3 == NULL)
{
return (NULL);
}
for (s1index = 0; s1[s1index] != '\0'; s1index++)
{
String3[s1index] = s1[s1index];
}
for (s2index = 0; s2index != n; s2index++)
{
String3[s1index] = s2[s2index];
s1index++;
}
String3[s1index] = '\0';
return (String3);
}
