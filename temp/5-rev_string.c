#include "main.h"

/**
 * rev_string - reverses string in one array
 * @s: string variable
 *
 */

void rev_string(char *s)
{
int temp, i, j;

i = 0;
j = 0;

while (s[j] != '\0')
{
j++;
}
j--;

while (j > i)
{
temp = s[j];
s[j] = s[i];
s[i] = temp;
i++;
j--;
}
}
