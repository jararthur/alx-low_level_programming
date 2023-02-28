#include "main.h"
/**
 * _puts - this is the puts functiuon to print a string
 * @str: this is an attribute to the -puts function
 * Return: the function returs void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
