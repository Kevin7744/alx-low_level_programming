#include "main.h"
/**
     * _strcat - Function that concatenates two strings
     * using n bytes from src
     * @dest: input value
     * @src: input value
     * @n: input value
     * Return: dest
    */
char *_strncat(char *dest, char *src, int n)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
