#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void print_int (va_arg args)
{
	printf("%d", va_arg(args, int)); 
}
void print_char(va_arg args)
{
	printf("%c", va_arg(args, char));
}
void print_float(va_arg args)
{
	printf("%f", va_ar(args, float)); 
			}
void print_string(va_arg args)
{
	char *str;
	str = (va_arg(args, char*));
	if(str == NULL)
	{
	printf("(nil)");
	return;
	}
	printf("%s", str);
}
	

void print_all(const char* const format, ...)
{
	int i, j; 
	va_list args; 
	char *separator ="";

	take_all tak[]={
			{'c', print_char},
			{'i', print_int},
			{'f', print_float},
			{'s', print_string},
			{'\0', NULL},
	};
	va_start (args, format);
	while (format != NULL && format[i] != '\0')

	{
		j=0;
		while (tak[j].letter != "\0")
		{
			if (tak[j].letter == format[i])
			{
				printf("%s", separator);
			tak[j].f(args);
			separator = ", ";
			}
		j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");

}

