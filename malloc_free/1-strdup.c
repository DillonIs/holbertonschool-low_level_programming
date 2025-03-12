#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to newly assigned memory contain copy of str
 * @str: String pointer
 *
 * Return: Returns NULL if fail, otherwise returns copy
 */

char *_strdup(char *str)
{

int index = 0;
int strlen = 0;
char *copy;

if (str == NULL)
{
return (NULL);
}

while (str[index] != '\0')
{
index++;
strlen++;
}
copy = malloc(sizeof(char) * (strlen + 1));

if (copy == NULL)
{
return (NULL);
}

index = 0;

while (str[index] != '\0')
{
copy[index] = str[index];
index++;
}
copy[index] = '\0';
return (copy);
}
