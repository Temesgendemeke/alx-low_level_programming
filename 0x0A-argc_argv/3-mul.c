#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments
 * @argv : array
 * Return: return 1 when a program does not receive two arguments
 */
int main(int argc, char *argv[])
{
int i;
int mul = 1;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);

}
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
