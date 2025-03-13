#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Appends a second string to the first
 * @s1: First string
 * @s2: Second string
 *
 * Return: Returns NULL if fail, otherwise returns s2 added to s1
 */

char *str_concat(char *s1, char *s2)
{
int s1index = 0;
int s2index = 0;
int index = 0;
char *copy;
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
copy = malloc((strlen + 1) * sizeof(char));
if (copy == NULL)
{
return (NULL);
}
for (s1index = 0; s1[s1index] != '\0'; s1index++)
{
copy[index] = s1[s1index];
index++
}
for (s2index = 0; s2[s2index] != '\0'; s2index++)
{
copy[index] = s2[s2index];
index++;
}
copy[index] = '\0';
return (copy);
}
