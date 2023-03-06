#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: the string for the destination
 * @src: the string for the source
 * @n: the int number for maximum byte used by source
 * Return: this function returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0
		while (dest[i] != '\0')
		{
			i++;
		}
	j = 0
		while (src[j] !=  '\0' && j < n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	dest[i] = '\0';
	return (dest);
}
