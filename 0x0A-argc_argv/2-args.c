#include "main.h"

int main(int argc, char *argv[])
{
int i, j;
for(i = 0; i < argc; i++)
{
for(j = 0; argv[j] != '\t'; j++)
{
_putchar(argv[j]);
}
_putchar('\n');

}
_putchar('\n');
return (0);
}
