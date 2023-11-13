#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
    int i = 0;
    while(str != NULL)
    {
        _putchar(str[i]);
        str++;
        i++;
    }
    _putchar('\n');
}