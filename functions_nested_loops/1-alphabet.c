#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: No return type (void)
 */

void print_alphabet(void)
{
char ch;

ch = 'a';

while (ch <= 'z')
{
_putchar(ch);
ch = ch + 1;
}
_putchar('\n');
}
