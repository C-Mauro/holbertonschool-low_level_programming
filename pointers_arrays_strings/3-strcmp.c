#include "main.h"
/**
 *_strcmp -compare strings like strcmp function
 *
 *@s1: first string
 *
 *@s2: second string
 *
 * Return: negative:s1 < s2, positive:s1 > s2 and 0: same lenght.
 */
int _strcmp(char *s1, char *s2)
{
	int i;
		for (i = 0 ; s1[i] != 0 && s2[i] != 0 ; i++)
			if (s1[i] != s2[i])
			{
				return (s1[i] - s2[i]);
			}
	return (0);
}
