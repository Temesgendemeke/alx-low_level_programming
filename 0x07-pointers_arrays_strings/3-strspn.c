#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: char to be counted
 * *accept: char to be checked if exist
 * Return: return length of char
 */
unsigned int _strspn(char *s, char *accept)
{
size_t count = 0;
int found = 0;
while (*s) {
found = 0;
for (int i = 0; accept[i]; i++) {
if (*s == accept[i]) {
count++;
found = 1;
break;
}
}
if (!found) {
break;
}
s++;
}
return count;
}
