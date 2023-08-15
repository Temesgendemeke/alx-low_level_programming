#include <stdio.h>
/**
  * main - Entry point
  * Description: 'prints string with newline'
  * Return: Always 0 (Success)
*/
int main(void)
{
char h[10] = "0-putchar";

int i = 0;

while (i <= 10)
{
putchar(h[i]);
i++;
}
putchar('\n');
return (0);
}
