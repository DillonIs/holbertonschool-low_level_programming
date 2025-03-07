#include "main.h"

/**
 * print_chessboard - Prints a chessboard pieces
 * @a: Defines the 2-D array
 * 
 * Return: Not a return type function
 */

void print_chessboard(char (*a)[8])
{
int column = 0;
int row = 0;

while (row < 8)
{
column = 0;
while (column < 8)
{
_putchar(a[row][column]);
column++;
}
_putchar('\n');
row++;
}
}
