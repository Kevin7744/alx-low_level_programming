#include <main.h>
/**
 * main - check the code
 * 
 * Return: Always 0.
 */
int print_last_digit(int i)
{
    if ( i < 0 )
        i = i * -1;
    _putchar((i % 10) + '0');
    return ( i % 10);
}
