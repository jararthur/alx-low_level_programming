#include "main.h"
/**
 * _strcat - this is the strncat function
 * @dest: this is the first variable declaration
 * @src: this is the second variable declaration
 * Return: this function does not return any value
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
