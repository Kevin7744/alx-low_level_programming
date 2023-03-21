#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * Return: On success 1.
*/
int main(void)

{
    char c[] = "";
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        _putchar(c[i]);
    }
    _putchar('\n');
    return (0);
}
