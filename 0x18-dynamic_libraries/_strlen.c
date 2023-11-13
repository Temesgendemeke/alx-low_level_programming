#include "main.h"

int _strlen(char *s)
{
int counter = 0;
while(s != NULL)
{
counter++;
s++;
}
return (counter);
}
