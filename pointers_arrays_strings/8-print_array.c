#include "main.h"
#include <stdio.h>
/**
 *print_array - print array separated by a comma and space.
 *
 *@a: string address
 *
 *@n: string lenght
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
