#include "main.h"
#include <stdio.h>
/**
 * puts2 - this functions prints multiple indices of 2 of a string
 * @s: String to be printed
 * Return: nothing
 *
 */
void puts2(char *s)
{
int i = 0, index;
while (s[i] != '\0')
{
i++;
}
for (index = 0; index < i; index += 2)
{
_putchar(s[index]);
}
_putchar('\n');
}
