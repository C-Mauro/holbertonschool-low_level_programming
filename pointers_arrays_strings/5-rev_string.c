#include "main.h"
/**
 *rev_string -revert the string
 *
 *@s: string adress
 */
void rev_string(char *s)
{
	int i;
	char a;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	for (count = 0, i = i - 1 ; i > count; count++, i--)
	{
		a = s[i];
		s[i] = s[count];
		s[count] = a;
	}
}
