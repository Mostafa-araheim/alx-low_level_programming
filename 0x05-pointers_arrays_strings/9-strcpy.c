#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copies a string into another
 * @dest: the string copied
 * @src: the string to be copied
 * Return: a copy of the string
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
for (; src[i] != '\0' ; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
