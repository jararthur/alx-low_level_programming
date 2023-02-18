#include <stdio.h>
/**
 * main - this is where the code start executing
 *
 * Return: this function returns zero after execution
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}
