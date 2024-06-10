#include <stdio.h>
#include "main.h"
/**
 * print_rev - this function reverses a string
 * @s : a pointer to a string
 * Return : nothing
 */
void print_rev(char *s)
{
int counter = 0;
while (s[counter] != '\0')
{
counter++;
}
for(counter = counter-1 ; counter >= 0; counter--)
{
_putchar(s[counter]);
}
_putchar('\n');
}
