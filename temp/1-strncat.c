#include "main.h"

/**
 * _strncat - appends string upto n bytes
 * @dest: Destination of string
 * @src: Source of string
 * @n: Amount of bytes not to exceed
 *
 * Return: returns destination after copying
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int srcindex = 0;

while (dest[index] != '\0')
{
index++;
}
if (n <= 0)
{
return (dest);
}
if (n > 0)
{
while (src[srcindex] != '\0' && srcindex < n)
{
dest[index] = src[srcindex];
srcindex++;
index++;
}
}
dest[index] = '\0';
return (dest);
}
