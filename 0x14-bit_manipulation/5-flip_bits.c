#include "main.h"

/**
 * flip_bits - returns hamming distance of two bit words
 * which is the number of bits you would need to flip to get
 * from one number to another
 * @n: the first bit word
 * @m: the second bit word
 *
 * Return: the hamming distance
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * BYTE_LENGHT);
	int i = 0;

	while (shift--)
		i += (n >> shift & 1) != (m >> shift & 1);
	return (i);
}
