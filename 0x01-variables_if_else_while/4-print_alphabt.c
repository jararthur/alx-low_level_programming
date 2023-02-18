#include <stdio.h>
/**
 * main - this is the maint file
 *
 * Return: this always return zero after executing
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		char c = 'a' + i;

		if (c != 'q' && c != 'e')
	{
		putchar(c);
	}
	}

	putchar('\n');

	return (0);
}
