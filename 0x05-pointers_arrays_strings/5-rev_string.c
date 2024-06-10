#include <stdio.h>
#include "main.h"
/**
 *
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
int c = 0 ,i=0;
char temp;
while (s[c] != '\0')
{
c++;
}
while (i < c/2)
{
temp = s[i];
s[i] = s[c-i-1];
s[c-i-1] = temp;
i++;
}
}
