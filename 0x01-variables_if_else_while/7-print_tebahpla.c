#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'prints string with newline'
  * Return: Always 0 (Success)
*/
int main(void)
{
char last = 'z';
while (last >= 'a')
{
putchar(last);
last--;
}
putchar('\n');
return (0);
}
