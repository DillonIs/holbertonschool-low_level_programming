#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string into integer
 * Return: only digits otherwise 0
 * @s: string pointer
 */

int _atoi(char *s)
{
int stringlen = 0;
unsigned int end = 0;
int signcount = 0;

while (s[stringlen] == ' ')
{
stringlen++;
}
while (s[stringlen] != '\0')
{
if (s[stringlen] == '-')
{
signcount++;
}
else if (s[stringlen] >= '0' && s[stringlen] <= '9')
{
end = end * 10 + (s[stringlen] - '0');
}
else if (end > 0)
{
break;
}
stringlen++;
}
if (signcount % 2 == 1)
{
end = -end;
}
if (end == 0)
{
return (0);
}
return (end);
}
