#include <stdio.h>
#include <string.h>
/**
  * main - Entry point
  *
  * Description: 'prints string with newline'
  * Return: Always 0 (Success)
*/
int main(void)
{
char alpha = 'a';

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha == 'e' || alpha == 'q')
{
continue;
}
putchar(alpha);
}
putchar('\n');
return (0);
}




