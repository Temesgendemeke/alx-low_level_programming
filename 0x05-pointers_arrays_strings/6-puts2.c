#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to evaluate
 */
void puts2(char *str)
{
int i;
int j, k;

while (str[j] != '\0')
{
j++;
}
k = j - 1;
for (i = 0; i < k; i += 2)
{
putchar (str[i]);
}
putchar('\n');
}
int main(void)
{
    char *str;

    str = "Holberton!";
    puts2(str);
    return (0);
}
