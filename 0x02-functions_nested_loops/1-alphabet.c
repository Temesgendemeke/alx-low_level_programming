#include <stdio.h>
#include "main.h"
/**
  * main - Entry point
  *
  * Description: 'prints string with newline'
  * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char h;

for (h = 'a'; h <= 'z'; h++)
{

_putchar(h);

}


}
int main(void)
{
    print_alphabet_x10();
     _putchar('\n');
    return (0);
}
