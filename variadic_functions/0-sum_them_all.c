#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *
 *
 *
 *
 */

int sum_them_all(const unsigned int n, ...)
{
  va_list args;
  int result;
  unsigned int index;
  
  result = 0;
  index = 0;
  va_start(args, n);

  while (index < n)
    {
      result += va_arg(args, int);
    }
  va_end(args);
  return (result);
}
