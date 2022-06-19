#include "main.h"
/**
 *reverse_array -reverse the array
 *
 *@a: array
 *
 *@n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int aux;

	for (i = 0 ; i < n ; i++)
	{
		n--;
		aux = a[i];
		a[i] = a[n];
		a[n] = aux;
	}
}
