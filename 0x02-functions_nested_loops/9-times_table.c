#include "main.h"
/**
 * times_table - this functions prints the 9 times table
 *
 * Return: this is returning void
 */
void times_table(void)
{
	int i;
	int j;
	int ans;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ans = i * j;
			if (ans < 10)
			{
				_putchar(ans + '0');
			}
			else
			{
				_putchar((ans / 10) + '0');
				_putchar((ans % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
