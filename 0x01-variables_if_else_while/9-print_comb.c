#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'prints all possible combinations of single-digit numbers'
  * Return: Always 0 (Success)
*/
int main(void)
{
int a;

a = 0;
while (a < 10)
{
putchar(48 + a);
a++;
if (a == 10)
break;
putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}
