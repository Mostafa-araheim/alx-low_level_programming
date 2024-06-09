#include <stdio.h>
/**
 * _strlen - Returns the length of the string
 * @c: pointer to a char
 * Return the length of @str
 */
int _strlen(char *s)
{
int i=0;
while(s[i] != '\0') 
i++;
return (i);
}
