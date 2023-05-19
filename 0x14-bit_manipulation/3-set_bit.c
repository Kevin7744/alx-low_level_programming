#include "main.h"

/**
 * set_bit  sets the  bit of a given index to 1
 * 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
