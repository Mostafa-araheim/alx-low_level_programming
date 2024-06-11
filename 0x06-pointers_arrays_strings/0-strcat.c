#include "main.h"
#include <stdio.h>
/**
 * _strcat - this function concatenates 2 strings
 * @dest: the string to be returned
 * @src: the string to be concatenated
 * Return; the concatenated string
 */
char *_strcat(char *dest, char *src)
{
int n = 0, m  = 0;
while (dest[n] != '\0')
{
n++;
}
for (; src[m] != '\0' ; m++, n++)
{
dest[n] = src[m];
}
dest[n] = '\0';
return (dest);
}
