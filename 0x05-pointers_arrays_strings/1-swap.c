#include <stdio.h>
/**
 * swap_int - swaps value of two integers
 * @a: first pointer.
 * @b: "second pointer."
 * Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
