#ifndef PRINT_FUNCTIONS_H
#define PRINT_FUNCTIONS_H

void print_string(va_list arg)
{
  char *str;
  str = va_arg(arg, char *);
  if (str == NULL)
    {
      printf("(nil)");
    }
  printf("%s", str);
}

void print_letter(va_list arg)
{
  char str;
  str = va_arg(arg, int);

  printf("%c", str);
}

void print_integer(va_list arg)
{
  int num;
  num = va_arg(arg, int);

  printf("%d", num);
}

void print_float(va_list arg)
{
  float num;
  num = va_arg(arg, double);

  printf("%f", num);
}

#endif
