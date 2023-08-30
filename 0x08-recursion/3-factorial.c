#include "main.h"
/**
 * factorial - Returns the length of a string.
 * @n: int to be evaluted
 *
 * Return: factorial
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 1 || n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
