#include "main.h"
/**
 *_strspn -get the length of a prefix substring.
 *
 *@s: pointer (string)
 *
 *@accept: bytes content.
 *
 * Return: i (number of bytes in the initial segment of the string)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
	if (!accept[j])
		break;
	}		return(i);

}
