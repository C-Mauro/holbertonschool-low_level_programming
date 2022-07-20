#include "main.h"
#include <stdlib.h>
/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b: pointer to a string with characters 0 and 1.
 *Return: the numbert convert to an unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			num <<= 1;

		else if (b[i] == '1')
		{
			num <<= 1;
			num += 1;
		}
		else
			return (0);
	}
	return (num);
}
