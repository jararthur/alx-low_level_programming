#include "main.h"
/**
 * _strcmp - A  function that compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: this returns an int
 */
int _strcmp(char *s1, *s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
