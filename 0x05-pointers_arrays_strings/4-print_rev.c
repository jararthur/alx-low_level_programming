#include "main.h"
/**
 * print_rev - this is the print rev function
 * @s: this prints a string in reverse followed by new line
 * Return: this function returns nothing (void)
 */
void print_rev(char *s);
{
	int lenght = 0;
	int i;

	while (s[lenght] != '\0')
		lenght++;
	for (i = lenght - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
