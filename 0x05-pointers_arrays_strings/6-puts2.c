#include "main.h"
/**
 * puts2 - this is the puts2 local library function
 * @str: this is the str variable declared
 * Return: this function return void
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i])
	}
	_putchar('\n');
}
