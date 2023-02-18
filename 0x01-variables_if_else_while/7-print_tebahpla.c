#include <stdio.h>
/**
 *main - this is where the program begins to execute
 *
 *Return: this function returns zero
 */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
