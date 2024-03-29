#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, sum = 0;

	while (xor > 0)
	{
		sum += xor & 1;
		xor >>= 1;
	}

	return (sum);
}
