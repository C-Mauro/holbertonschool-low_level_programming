#include "main.h"
/**
 *cap_string -capitalizez all word of a string.
 *
 *@a: array
 *
 * Return: capitalizes words
 */
char *cap_string(char *a)
{
	int c;

	for (c = 0; a[c] != '\0'; c++)
	{
		if (c == 0)
		{
			if (a[c] >= 'a' && a[c] <= 'z')
			{

			a[c] = a[c] - 32;
		}
	}
		if (a[c] == ' ' || a[c] == '\0' || a[c] == ',' || a[c] == '\t' || a[c] == ';' || a[c] == '.' || a[c] == '!' || a[c] == '?' || a[c] == '"' || a[c] == '(' || a[c] == ')' || a[c] == '{' || a[c] == '}')
		{
			if (a[c + 1] >= 'a' && a[c + 1] <= 'z')
			{
				a[c + 1] = a[c + 1] - 32;
			}
		}
	}
	return (a);
}
