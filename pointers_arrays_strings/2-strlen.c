#include "main.h"

/**
 * _strlen: finds a strings length
 *
 * Return: Returns stringlength
*/

int _strlen(char *s)
{
int stringlength = 0;

while (*s++)
stringlength++;

return (stringlength);
}
