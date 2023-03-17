#include <stdio.h>
/**
 * main - prints the size of various types on the computer it is compiled and
 * run on.
 * Return: 0
 */
int main (void)
{
    printf("size of char: %lu byte(s)\n", sizeof(char));
    printf("size of int: %lu byte(s)\n", sizeof(int));
    printf("size of long int: %lu byte(s)\n", sizeof(long int));
    printf("size of long long int: %lu byte(s)\n", sizeof(long long int));
    printf("size of float: %lu byte(s)\n", sizeof(float));
    return (0);

}
