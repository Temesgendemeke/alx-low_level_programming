#include <stdio.h>
/**
  * main - Entry point
  * Description: 'prints string with newline'
  * Return: Always 0 (Success)
*/
int main(void)
{
char h[8] = "_putchar";

int i = 0;

while (i <= 9)
{
putchar(h[i]);
i++;
}
putchar('\n');
return (0);
}
