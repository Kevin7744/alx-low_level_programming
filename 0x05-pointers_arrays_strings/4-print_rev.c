#include "main.h"
/**
 * print-rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 * Return: 0
*/
void print_rev(char *s)
{
    int i = 0;
    int o;
    while (*s !='\0')
    {
        i++;
        s++;
    }
    s--;
    for (o = i; o >0; o--)
    {
        _putchar(*s);
        s--;
    }
    _putchar('\n');
}
