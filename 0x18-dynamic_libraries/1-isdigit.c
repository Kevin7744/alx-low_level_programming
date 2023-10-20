#include "main.h"
/**
 * _isdigit - checks for numbers from 0 - 9
 * @c: char to be checked
 *
 * Return: returns 1 if c is a digit 0 if otherwise
 */

int _isdigit(int c)
{
	return(c >= '0' && c <= '9');
}
