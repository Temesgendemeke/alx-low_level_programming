#include "main.h"
/**
 * main - prints its name, followed by a new line.
 * @argc: legnth of array
 * @argv[] : array vector
 * Return: 0(SUCEESS) always;
 */
int main(int argc, char* argv[])
{
int i;
for(i = 0; i < argc; i++)
{
_putchar(argv[i]);
}
_putchar('\0');
return (0);
}


