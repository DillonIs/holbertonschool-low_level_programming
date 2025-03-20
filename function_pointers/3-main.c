#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for program
 * @argc: Argument count
 * @argv: Argument v
 *
 * Return: Returns error codes if fail otherwise cont
 */

int main(int argc, char *argv[])
{
int a, b;
int (*operator)(int a, int b);
  
if (argc != 4)
{
printf("Error\n");
exit(98);
}
operator = get_op_func(argv[2]);
if (operator == NULL)
{
printf("Error\n");
exit(99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
{
printf("Error\n");
exit(100);
}
a = atoi(argv[1]);
b = atoi(argv[3]);

printf("%d\n", operator(a, b));

return (0);
}
