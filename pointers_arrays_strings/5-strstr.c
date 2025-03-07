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
int temphayindex = hayindex;
while (needle[needindex] != '\0' && (haystack[temphayindex] == needle[needindex]))
{
temphayindex++;
needindex++;
if (needle[needindex] == '\0')
{
return (haystack + hayindex);
}
}
needindex = 0;
}
hayindex++;
}
return (0);
}
