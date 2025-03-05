#include "main.h"

/**
 * leet - Encodes specific characters in a string
 * @s: string to be encoded
 *
 * Return: returns modified string
 */

char *leet(char *s)
{
int index = 0;
int charindex;

char characters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
char numbers[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

while (s[index] != '\0')
{
for (charindex = 0; charindex < 10; charindex++)
{
if (s[index] == characters[charindex])
{
s[index] = numbers[charindex];
break;
}
}
index++;
}
return (s);
}
