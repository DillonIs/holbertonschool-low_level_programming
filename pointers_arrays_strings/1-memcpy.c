#include "main.h"

/**
 * _memcpy - Copies memory locations upto n bytes
 * @dest: Defines the destination to copy to
 * @src: Defines the source to get the copy from
 * @n: Number of bytes to copy
 *
 * Return: Returns the dest after copying
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int count = 0;

while (count < n)
{
dest[count] = src[count];
count++;
}
return (dest);
}
