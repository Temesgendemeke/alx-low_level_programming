#include "main.h"
/**
 * print_array - returns the length of a string
 * @n: array length
 * @a: string aray  to evalute
 */
void print_array(int *a, int n)
{

int i, k;

for (k = 0 ; k < n; k++)
{
printf("%d", a[k]);
if (k < n - 1)
printf(", ");
}
putchar('\n');
}
