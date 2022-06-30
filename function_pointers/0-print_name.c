#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name -print name
 *@name: name
 *@f: pointer to a function to print NAME
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
