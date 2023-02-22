#include "main.h"
/**
 * print_alphabet_x10 - this  returns voin so you dont return anything
 *
 * Return: this does not have a return value
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
