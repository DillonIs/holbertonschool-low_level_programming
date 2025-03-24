#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

void print_string(va_list arg);
void print_letter(va_list arg);
void print_integer(va_list arg);
void print_float(va_list arg);
void print_all(const char * const format, ...);
typedef struct print
{
  char *specifer;
  void (*print_func)(va_list arg);
} print_t;

#endif
