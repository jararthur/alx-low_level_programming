#include "main.h"
/**
 * puts_half - this is the puts _half function
 * @str: this prints half of a string
 * Return: this function returns nothing as itis void
 */
void puts_half(char *str)
{
	int lenght = 0, i;

	while (str[lenght] != '\0')
		lenght++;
	if (lenght % 2 == 0)
		i = lenght / 2;
	else
		i = (lenght + 1) / 2;
	for (; i < lenght; i++)
		_putchar(str[i]);
	_putchar('\n');
}
