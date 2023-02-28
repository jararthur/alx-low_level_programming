#include "main.h"
/**
 * _strlen - this is the strlen function to return lenght of string
 * @s: this is the char attribute to strlen
 * Return: this function returns notiong (void)
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s)
	{
		lenght++;
		s++;
	}
	return (lenght);
}
