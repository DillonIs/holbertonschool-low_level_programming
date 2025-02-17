#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
long int b;
long long int c;

printf("Size of an int: %u bytes\n", sizeof(a));
printf("Size of a long int: %u bytes\n", sizeof(b));
printf("Size of a long long int: %u bytes\n", sizeof(c))
printf("Size of float: %u bytes\n", sizeof(float));
printf("Size of double: %u bytes\n", sizeof(double));
printf("Size of char: %u bytes\n", sizeof(char));
return (0);
}
