#include "main.h"
/**
 *get_bit -returns the value of a bit at a given index.
 *@n: number
 *@index: number of bits to move (start in 0)
 *Return: 1 (-1 if doesn't work)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = (sizeof(n) * 8);

	if (size < index)
	return (-1);

	n >>= index;

	if ((n & 1) == 1)
	return (1);

	else
		return (0);
}
