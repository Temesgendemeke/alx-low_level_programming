#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'prints string with newline'
  * Return: Always 0 (Success)
*/
int main(void)
{
char low, up;

low = 'a';
up = 'A';
for (low = 'a'; low  <=  'z'; low++)
putchar (low);
for (up = 'A'; up  <=   'Z'; up++)
putchar (up);
putchar ('\n');
return (0);
}

