#include "main.h"

/**
 * print_triangle - prints a triangle n size
 * length - parameters for triangle
 * height - parameters for triangle
 * @size: how big the triangle is
 *
 */

void print_triangle(int size)
{
int length = 0;
int height = 0;
int spaces;

if (size <= 0)
{
_putchar('\n');
return;
}
while (height < size)
{
spaces = size - height - 1;
while (length < size)
{
if (spaces > length)
{
_putchar(' ');
}
else
{
_putchar('#');
}
length = length + 1;
}
height = height + 1;
length = 0;
_putchar('\n');
}
}
