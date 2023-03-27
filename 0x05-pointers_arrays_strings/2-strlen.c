#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
*/
void _strlen(char *s)
{
    int lengthi = 0;
    while (*s != '\0')
    {
        lengthi++;
        s++;
    }
    return (lengthi);
}
