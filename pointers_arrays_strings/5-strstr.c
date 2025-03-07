#include "main.h"

/**
 * _strstr - Function finds first occurence of substring in string
 * @haystack: Main string set
 * @needle: Sub-string to be found in main
 *
 * Return: Returns the substring if found
 * Otherwise returns NULL
 */

char *_strstr(char *haystack, char *needle)
{
int hayindex = 0;
int needindex = 0;

if (needle[0] == '\0')
{
return (haystack);
}
while (haystack[hayindex] != '\0')
{
if (haystack[hayindex] == needle[needindex])
{
needindex = 0;
while (haystack[hayindex] == needle[needindex])
{
needindex++;
hayindex++;
if (needle[needindex] == '\0')
{
return (haystack + (hayindex - needindex));
}
if (haystack[hayindex] != needle[needindex])
{
break;
}
}
}
hayindex++;
}
return (0);
}
