#include "main.h"
/**
 * cap_string - A function that capitalizes all words of a string
 * @str: this is a string
 *
 * Return: this function returns a pointer
 */
char *cap_string(char *str)
{
	int i, j;
	char ch[] = ' ', '\n', ';', ',', '.', '!', '?',
	     '"', '(', ')', '{', '}', 11, 9;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (s[i] == ch[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (0);
}
