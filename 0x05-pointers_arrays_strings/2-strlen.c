#include <stdio.h>
/**
 * _strlen - Returns the length of the string
 * @s: pointer to a char
 * Return: the length of @s
 */
int _strlen(const char *s)

{
int i = 0;
while (*s++)
i++;
return (i);
}
