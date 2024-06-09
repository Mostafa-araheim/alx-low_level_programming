#include <stdio.h>
/**
 * _strlen - Returns the length of the string
 * @c: pointer to a char
 * Return the length of @str
 */
int _strlen(const char *s)

{
    int i=0;
    while (*s++)
    i++;
    return (i);
}
