#include "main.h"
/**
 *
 *
 */

int prime_num(int n, int m)
	{
	if ((m != n) && (n != 1) && (n % m != 0))
		prime_num(n, m + 1);
			
	else if ((n == 1) || (n < 0))
		return (0);

	else 
		return (1);

	return (0);
	}
	
int is_prime_number(int n)
{
	return(prime_num(n, 2));
}
