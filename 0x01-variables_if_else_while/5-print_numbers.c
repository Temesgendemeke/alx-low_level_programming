#include <stdlib.h>
#include <stdio.h>
/**
  * main - Entry point
  *
  * Description: 'prints numbers 10 starting from 0 with newline'
  * Return: Always 0 (Success)
*/
int main(void)
{
int numb;

numb = 0;
for (numb = 0; numb < 10; numb++)
{
printf("%d", numb);
}
printf("\n");
return (0);
}
