#include <stdio.h>
/**
 *main - this is where the program begins to execute
 *
 *Return: this function returns zero
 */
int main(void)
{
	int i;

	for (i = 26; i <= 1; i--)
	{
		putchar(i - 1);
	}
	putchar('\n');
	return (0);
}
