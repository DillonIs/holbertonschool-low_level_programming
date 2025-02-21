#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet lowercase 10 times
 *
 * Return: No return type (void)
 */

void print_alphabet_x10(void)
{
int end = 1;
char ch;
while (end <= 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch = ch + 1;
}
_putchar('\n');
end = end + 1;
}
}
