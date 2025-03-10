#include <stdio.h>

/**
 * main - Entry point for program
 * @argc: Commands issued
 * @argv: Array where it gets saved
 *
 * Return: Returns back to 0
 */

int main(int argc, char *argv[])
{
int index = 0;

while (index < argc)
{
printf("%s\n", argv[index]);
index++;
}
return (0);
}
