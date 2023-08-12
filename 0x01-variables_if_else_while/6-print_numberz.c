#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'prints string with newline'
  * Return: Always 0 (Success)
*/
int main(void)
{
int n;

n = 0;
while (n < 10)
{
putchar(48 + n);
n++;
}
putchar('\n');
return (0);
}
