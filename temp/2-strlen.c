#include "main.h"

/**
 * _strlen - finds a string's length
 * @s: string variable
 * Return: Returns stringlength
 */

int _strlen(char *s)
{
int stringlength = 0;

while (*s++)
stringlength++;

return (stringlength);
}
