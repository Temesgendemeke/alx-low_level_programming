#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'prints string with newline'
  * Return: Always 0 (Success)
*/
int main(void)
{
int num;
char chr;

for (num = 0; num < 10; num++)
{
putchar(48 + num);
}
for (chr = 'a'; chr <= 'f'; chr++)
{
putchar(chr);
}
putchar('\n');
return (0);
}

