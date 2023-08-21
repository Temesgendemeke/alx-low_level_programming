#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @s: string to evaluate
 */

void puts_half(char *str)
{

int i, n, a;

i = 0;

while (str[i] != '\0')
{
i++;
}

if (i % 2 == 0)
{
for (a = i / 2; str[a] != '\0'; i++)
{
_putchar(str[a]);
}
}
else
{
for (n = (i - 1) / 2; n < i - 1; n++)
{
_putchar(str[n + 1]);
}
_putchar('\n');
}
}
