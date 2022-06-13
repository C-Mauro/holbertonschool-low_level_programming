#include "main.h"
/**
 *jack_bauer -print a clock
 *
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; h++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');

			_putchar('\n');
		}
	}

}
