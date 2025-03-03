#include "main.h"

/**
 * _strncpy - copies n characters from src to dest
 *
 * @dest: Destination of copied string
 * @src: Source of string to copy
 * @n: The number of characters to copy
 *
 * Return: Returns the destination after copy
 */

char *_strncpy(char *dest, char *src, int n)
{
int index = 0;

while (index < n && src[index] != '\0')
{
dest[index] = src[index];
index++;
}
while (index < n)
{
dest[index] = '\0';
index++;
}
return (dest);
}
