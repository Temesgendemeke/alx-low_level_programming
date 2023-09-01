#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc : length of argv array
 * @argv : array
 * __attribute__((unused)): to ignore unused variable.
 * Return: 0(SUCESS) always.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{

if (argc > 1)
{
putchar(48 + argc - 1);
}
else
{
putchar(48);
}
putchar('\n');
return (0);
}
