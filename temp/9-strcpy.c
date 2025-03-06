#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string from src to dest
 * @src: Source of copy
 * @dest: Destination for copy
 * Return: Return dest of copied string
 */

char *_strcpy(char *dest, char *src)
{
int index;
index = 0;

while (src[index] != '\0')
{
dest[index] = src[index];
index++;
}
dest[index] = '\0';
return (dest);
}
