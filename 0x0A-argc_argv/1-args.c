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
int i;

if (argc > 1)
{
_putchar(48 + argc - 1);
}
else
{
_putchar(48);
}
_putchar('\0');
return (0);
}
