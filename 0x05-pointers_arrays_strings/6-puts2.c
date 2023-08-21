#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: string to evaluate
 */
void puts2(char *str)
{
int i;

for (i = 0; i < 10; i += 2)
{
_putchar (str[i]);
}
_putchar('\n');
}
