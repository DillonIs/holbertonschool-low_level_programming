#include "main.h"

/**
 * _strcat - appends src to dest
 * @dest: Destination for Source to be added at the end
 * @src: Source string to be copied at the end of dest
 *
 * Return: Returns dest after src copied to end
 */

char *_strcat(char *dest, char *src)
{
int index = 0;
int srcindex = 0;

while (dest[index] != '\0')
{
index++;
}
while (src[srcindex] != '\0')
{
dest[index] = src[srcindex];
srcindex++;
index++;
}
dest[index] = '\0';
return (dest);
}
