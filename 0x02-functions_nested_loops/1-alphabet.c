#include "main.h"
/**
 * main - this is the _putchar functio
 *
 * Return: this will return 0 after a newline
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

