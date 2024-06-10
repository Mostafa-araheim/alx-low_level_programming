#include "main.h"
/**
 * puts_half - prints the second half of the array
 * @s: the string to be printed
 * Return: nothing
 */
void puts_half(char *s)
{
int i = 0, k;
while (s[i++])
{
i++;
}
if (i % 2 == 0)
{
k = i / 2;
}
else 
{
k = (i - 1) / 2;
k = k + 1;
}
for (; k < i ; k++)
{
_putchar(s[k]);
}
_putchar('\n');
}
