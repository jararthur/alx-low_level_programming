#include "main.h"
/**
 * rev_string - this is the rev function for the string
 * @s: this is a variable to char
 * Return: this functoin returns void
 */
void rev_string(char *s)
{
	int lenght = 0, i;
	char temp;

	while (s[lenght] != '\0')
		lenght++;
	for (i = 0; i < lenght / 2; i++)
	{
		temp = s[i];
		s[i] = s[lenght - i - 1];
		s[lenght - i - 1] = temp;
	}
}
