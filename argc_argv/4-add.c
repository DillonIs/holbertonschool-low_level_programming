#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: Arguments count
 * @argv: Argument array
 *
 * Return: Returns back to 0 if successful or too few args
 * If error returns 1 and Error message
 */

int main(int argc, char *argv[])
{
int index, sum = 0;

if (argc < 2)
{
printf("0\n");
return (0);
}

for (index = 1; index < argc; index++)
{
int j;
for (j = 0; argv[index][j] != '\0'; j++)
{
if (argv[index][j] < '0' || argv[index][j] > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[index]);
}
printf("%d\n", sum);
return (0);
}
