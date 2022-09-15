#include "main.h"
#include <stdio.h>
/**
 *
 *C program to check whether a character is uppercase or lowercase
 *
 */


void main(void)
{
char c;
if (c >= 'A' && c <= 'z')
{
printf("%c: %d\n", c, '1');
}
else if (c >= 'a' && c <= 'z')
{
printf("%c: %d\n", c, '0');
}

return (0);

}
