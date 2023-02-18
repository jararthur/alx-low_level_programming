#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: this returns zero at the end of execution
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar('a' + i);
	}

	for (i = 0; i < 26; i++)
	{
		putchar('A' + i);
	}

	putchar('\n');

	return (0);
}

