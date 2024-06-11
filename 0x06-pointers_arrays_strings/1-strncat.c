#include "main.h"
/**
 * _strncat - this function concatenates 2 strings to n index of the second strings
 * @dest: pointer to the destination of the resultant strings
 * @src: the string to be concatenated
 * @n: the number of indices
 * Return: the concatenated strings
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
for (; src[j] != '\0' && j < n; j++, i++)
{
dest[i] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
