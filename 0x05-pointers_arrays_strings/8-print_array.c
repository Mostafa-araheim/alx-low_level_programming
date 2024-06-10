#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array from the required index
 * separated by , 
 * @a: array pointer
 * @n: the ending index
 * Return: nothing
 */
void print_array(int *a ,int n)
{
    int i = 0;
    for (;i < n ; i++)
    {          
        printf("%d" ,a[i]);
        if (i != n-1)
        {
            printf(", ");
        }
    }
    printf("\n");
}
