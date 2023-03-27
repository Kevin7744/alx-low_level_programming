#include "main.h"
/**
 * swap_int - swaps the values of two intergers
 * @a: first interger
 * @b: second interger
 * return: void
*/
void swap_int(int *a, int *b)
{
    int p;
    p = *a;
    *a = *b;
    *b = p;
}
