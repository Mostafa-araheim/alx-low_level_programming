#include "main.h"
/**
 * _puts - prints a string followed by a newline to stdout
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
/*prints a string followed by a new line to stdout*/
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}

