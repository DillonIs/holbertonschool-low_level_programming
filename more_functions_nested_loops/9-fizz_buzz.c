#include <stdio.h>

/**
 * main - Program start
 * num_val - value of number
 * fizz - variable to replace
 * buzz - variable to replace
 * Return: Always 0 (Success)
 */

int main(void)
{
int num_val = 1;
int fizz = 3;
int buzz = 5;

if (num_val <= 100)
{
while (num_val <= 100)
{
if ((num_val % fizz) == 0 && (num_val % buzz) == 0)
printf("FizzBuzz");

else if ((num_val % fizz) == 0)
printf("Fizz");

else if ((num_val % buzz) == 0)
printf("Buzz");

else
printf("%d", num_val);
printf(" ");
num_val++;
}
printf("\n");
}
return (0);
}
