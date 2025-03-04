#include "main.h"

/**
 * cap_string - Capitalises first letter in string sent
 * @str: String being capped
 *
 * Return: Returns string after caps
 *
 */

char *cap_string(char *str)
{
int index = 0;
int indexspecial = 0;
char *separators = " \t\n,;.!?\"(){}";

if (index <= 0)
{
if (str[index] >= 'a' && str[index] <= 'z')
{
str[index] = str[index] - 32;
}
index++;
}
while (str[index] != '\0')
{
if (str[index - 1] == separators[indexspecial])
{
if (str[index] >= 'a' && str[index] <= 'z')
{
str[index] = str[index] - 32;
}
}
index++;
}
return (str);
}
