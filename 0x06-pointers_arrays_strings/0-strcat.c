#include "main.h"
/**
 * Function that concatenates two strings
 * @dest: string to be concatenated upon
 * @src: string to be concatenated to dest
 * @n: input value
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int i, j;
    i = 0;
    j = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}
