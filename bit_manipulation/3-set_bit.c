#include "main.h"
/**
 *set_bit -sets the value of a bit to 1 at a given index
 *@n: pointer to an int.
 *@index: number of bits that I move
 *Return: 1 if it work
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = (sizeof(n) * 8);

	if (size < index)
		return (-1);

	size = 1 << index;

	*n = *n | size;
	return (1);


}
