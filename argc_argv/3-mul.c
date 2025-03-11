#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Returns error when less than 2 args are used
 */

int main(int argc, char *argv[])
{
int multiply;

if (argc < 3)
{
printf("Error\n");
return (1);
}
multiply = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n", multiply);
return (0);
}
