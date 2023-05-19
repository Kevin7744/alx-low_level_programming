#include "main.h"

/**
 * converts binary to unsinged interger
 * @b: string 
 * Returns  the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[i] - '0');
	}

	return (decimal_val);
}
