#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - this is the local library file
 * @n: this is a function to call in the main function
 *
 * Return: this actually returns a value
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	} else
		{
			for (i = n; i > 98; i--)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
