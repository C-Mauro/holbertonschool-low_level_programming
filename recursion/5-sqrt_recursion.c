#include "main.h"
/**
 *square_root -the square root
 *
 *@n: number
 *
 *@m: square root (m*m)
 *
 *Return: square root
 */
int square_root(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	if (m * m > n)
	{
		return (-1);
	}
	return (square_root(n, m + 1));
}
/**
 * _sqrt_recursion -recursion of square root.
 * @n: number
 * Return: the natural square root.
 */
int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}
