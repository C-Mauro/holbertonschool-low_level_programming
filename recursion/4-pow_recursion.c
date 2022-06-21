#include "main.h"
/**
 *_pow_recursion - function that returns the value of xʸ
 *
 *@x: number
 *
 *@y: power
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{

	int m;

	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);
	if (y % 2 == 0)
	{
		m = _pow_recursion(x, y / 2);
		return (m * m);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
