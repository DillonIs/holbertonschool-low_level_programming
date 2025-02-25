#include "main.h"
/**
 * print_diagonal - diagonal line
 * amtrow - amount of rows
 * blankspace - amount of spaces
 * @n: number being tested
 */

void print_diagonal(int n)
{
  int amtrow = 1;
  int blankspace;
  if (n <= 0)
  {
    _putchar('\n');
  }
  else
    {
      while (amtrow <= n)
	{
	  blankspace = 1;
	  
	  while (blankspace < amtrow)
	    {
	      _putchar(' ');
	      blankspace++;
	    }
	    _putchar('\\');
	    _putchar('\n');
	    amtrow++;
	}
    }
}
