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

printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of an int: %u byte(s)\n", sizeof(a));
printf("Size of a long int: %u byte(s)\n", sizeof(b));
printf("Size of a long long int: %u byte(s)\n", sizeof(c));
printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
