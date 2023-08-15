#include <stdio.h>
#include "main.h"
/**
  * main - Entry point
  *
  * Description: 'prints string with newline'
  * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char abc = 'a';

for(abc = 'a'; abc <= 'z'; abc++){
putchar(abc);
}
}

int main(void)
{
print_alphabet();
putchar('\n');
return (0);
}
